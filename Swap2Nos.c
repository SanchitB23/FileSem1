//Swapping 2 Numbers
#include<stdio.h>
void main(){
    int x, y ;
    printf("Enter 2 Numbers\n");
    scanf("%d%d",&x,&y) ;
    x = x + y ;
    y = x - y ;
    x = x - y ;
    printf("\nNumbers = %d & %d",x,y);
}
