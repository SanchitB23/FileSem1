//Check Pallendrome
#include<stdio.h>
#include<string.h>
void main(){
    char a[10];
    int i,x,j,f=0;
    printf("Enter A Word For Pallendrome Check : ");
    gets(a);
    x = strlen(a);
    for(i=0 , j=x-1; i!=x/2; i++ , j--){
        if(a[i] != a[j]){
            f=1;
            break;
        }
    }
    if(f == 0){
        printf("\nIt's A Pallendrome");
    }
    else{
        printf("\nIt's Not A Pallendrome");
    }
}
