//Greatest Of 3 Numbers
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf("\n%d is greatest",a);
        else
        printf("\n%d is greatest",c);
    }
    else{
           if(b>c)
           printf("\n%d is greatest",b);
           else
           printf("\n%d is greatest",c);
    }
}
