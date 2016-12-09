//To Calculate The Factorial Of A Number
#include<stdio.h>
void main(){
    int x,i,fact = 1;
    printf("Enter A Number");
    scanf("%d",&x);
    for(i = x ; i > 0 ; i--){
        fact *= i;
    }
    printf("\nFactorial Of %d = %d",x,fact);
}
