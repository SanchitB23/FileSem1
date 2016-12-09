//Reversing A Number
//Incomplete
#include<stdio.h>
void main(){
    int num, rev[10] = 0, i = 1 , j, c = 0;
    printf("Enter A Number");
    scanf("%d",&num);
    while(num != 0){
        rev[i] = num % 10 ;
        num = num / 10 ;
        c++;
        i++;
    }printf("\n");
    for(j = c ; j > 0 ; j--){
        printf("%d",rev[j]);
    }
}
