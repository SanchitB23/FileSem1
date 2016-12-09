//Reversing A Number
//Incomplete
#include<stdio.h>
void main(){
    int num, rev[10], i, j, c;
    printf("Enter A Number");
    scanf("%d",&num);
    c = 0;
    i = 0;
    while(num != 0){
        rev[i] = num % 10 ;
        num = num / 10 ;
        c++;
        i++;
    }printf("\n");
    for(i = 0 ; i < c ; i++){
        printf("%d",rev[i]);
    }
}
