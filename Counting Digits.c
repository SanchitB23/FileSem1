//Counting Digits In An Integer
#include<stdio.h>
void main(){
    int x , y , c = 0;
    printf("Enter A Number");
    scanf("%d",&x);

    while(x != 0){
        x = x / 10 ;
        c++;
    }
    printf("Number Of digits : %d",c);
}
