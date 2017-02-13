#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main (){

    float n;
    int m;

    do{
    printf("how much change in owed?\n");
    n = GetFloat();
    } while( n <= 0);
    
    //convert the amount to pennies in m//
    m = round( n * 100);

    int q = 0;
    int d = 0;
    int nc = 0;
    int p = 0;

    if ( m >= 25){
        q = m / 25;
        m = m % 25;
    }

    if ( m >= 10){
        d = m / 10;
        m = m % 10;
    }

    if ( m >= 5){
        nc = m / 5;
        m = m % 5;
    }   

    if ( m >= 1){
        p = m;
    }
    printf ("%d\n", q+d+nc+p);
}
