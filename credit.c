#include<stdio.h>
#include<cs50.h>
#include<math.h>


int main (void){

    long long int cc_number;

    // ask for card number input
    do{
        printf("please input your credit card number.\n");
        cc_number = GetLongLong();
    } while (cc_number <= 0);  
    
    // define card digits
    int n = log10(cc_number);
    int s_digit, s_digitx2, s_result, result;
    
    // check card digits
    if (n == 12 || n == 14 || n == 15){
            result = 0;
            s_result = 0;
            
        //main calculation to find every second digit
        while (cc_number !=0){
            s_digit = cc_number % 10;
            result = result + s_digit;
            cc_number = cc_number / 10;
            s_digit = cc_number % 10;
            s_digitx2 = s_digit * 2;
            s_result = s_result + s_digitx2 % 10 + s_digitx2 / 10;
            cc_number = cc_number / 10;  
        }
            
        // check if the card is valid, if valid which type
        if ((s_result + result) % 10 == 0 ){
            
            if( n == 14){
                printf("AMEX\n");
            }    
            if( n == 12){
                printf("VISA\n");
            }    
            if( n == 15){
                if (s_digit == 4){
                    printf("VISA\n");
                } else {
                    printf("MASTERCARD\n");
                }
            }
        } else {
            printf("INVALID\n");
        } 
    } else {
        printf("INVALID\n");
    }
    return 0;
}
