//Calculating Sum Of N Natural Numbers
#include<stdio.h>
void main(){
    int n,i,sum = 0;
    printf("Enter A Number (N) : ");
    scanf("%d",&n);
    for(i = 0 ; i <= n ; i++){
        sum+=i;
    }
    printf("\nSum of Numbers Upto N is : %d",sum);
}
