//Fibonacci Sequence

#include<stdio.h>
void main(){
    int i,f,s,nxt,n;
    f = 0 ;
    s = 1 ;
    printf("Enter Number Upto Which You Want To See The Series");
    scanf("%d",&n);
    printf("\n%d",f);
    printf(" %d",s);
    for(i=0;i<n-2;i++){
        nxt = f + s ;
        printf(" %d",nxt);
        f = s ;
        s = nxt ;
    }
}
