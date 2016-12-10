// Finding Roots of A Quadratic Equation
#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,D,x1,x2;
    printf("Enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0){
            x1=(-b+sqrt(D))/2*a;
            x2=(-b-sqrt(D))/2*a;
            printf("\nThe value of Roots are = %f , %f",x1,x2);
         }
         else if(D = 0){
            x1=(-b)/(2*a);
            printf("\nRoots are Equal = %f",x1);
         }
         else {
            printf("\nNo Real Roots");
         }
 }
