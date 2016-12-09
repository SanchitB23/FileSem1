//Prime Number Or Not
#include<stdio.h>
void main()
{
    int i,x,flag=0;
    printf("Enter Number");
    scanf("%d",&x);
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
            flag=1;

    }
    if(flag==0)
        printf("%d is Prime",x);
    else if(flag==1)
        printf("%d is Not Prime number",x);
}
