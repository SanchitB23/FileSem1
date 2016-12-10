//Find Prime Numbers Between 2 Numbers
#include<stdio.h>
void main(){
    int n1,n2,z;
    printf("Enter 2 Numbers Between Which You Want To Find The Prime Numbers : ");
    scanf("%d%d",&n1,&n2);
    while(n1 < n2){
        z = PrimeNos(n1);
        if(z != 0){
            printf(" %d",n1);
        }
        n1++;

    }
}
int PrimeNos(int x){
    int i,f;
    for(i=2; i<x/2; i++){
        f=1;
        if(x % i == 0){
            f=0;
            break;
        }
    return f;
}


}
