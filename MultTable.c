//Creating A Multiplication Table
#include<stdio.h>
void main(){
    int x,y,i;
    printf("Enter A Number");
    scanf("%d",&x);
    for(i = 1 ; i <= 10 ; i++){
        y = x * i ;
        printf("\n%d * %d = %d",x,i,y);
    }
}
