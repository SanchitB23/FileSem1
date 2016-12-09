//To Check Whether A year is a Leap Year or Not
#include<stdio.h>
void main(){
    int yr;
    printf("Enter A Year : ");
    scanf("%d",&yr);
    if(yr % 4 == 0){
        yr/=100;
        if(yr %4 == 0){
            printf("\nIt's A Leap Year");
        }
        else{
            printf("\nIt's Not A Leap Year");
        }
    }
    else{
        printf("\nIt's Not A Leap Year");
    }
}
