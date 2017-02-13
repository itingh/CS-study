#include <stdio.h>
#include <cs50.h>

int main () {

    int height;

    // as for height input
    do {
    printf("give me a number between 0 and 23\n");
    height = GetInt ();
    } while (height > 23 || height < 0);
    
    // confirm the height
    // printf("you want a paramid with %d layers.\n",height);

    // print out the pyramid
    for ( int n = 0; n < height; n++){
        for ( int i = 0; i <= height; i++){
            if ( i < height - n - 1){
                printf(" ");
            }
            else{
                printf("x");
            }
        }
    printf("\n");
    }
}
