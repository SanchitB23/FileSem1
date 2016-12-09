//Checking If Number is Even Or Odd
#include<stdio.h>
void main(){
    int x;
    printf("Enter A number\n");
    scanf("%d",&x);
    x % 2 == 0 ? printf("\nThe Number is Even") : printf("\nThe Number is Odd");
}
