//Computing Quotient And Remainder
#include<stdio.h>
void main(){
    int x,y,q,r;
    printf("Input Dividend\n");
    scanf("%d",&x);
    printf("\nInput Divisor\n");
    scanf("%d",&y);
    q = x / y ;
    r = x % y ;
    printf(" \nQuotient = %d \nRemainder = %d ", q, r);
}
