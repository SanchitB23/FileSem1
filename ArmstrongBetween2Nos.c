//Find Armstrong Nos Between Given Numbers
#include<stdio.h>
#include<math.h>
void main(){
    int n1,n2,z;
    printf("Enter 2 Numbers Between Which You Want To Find The Armstrong Numbers : ");
    scanf("%d%d",&n1,&n2);

    while(n1 < n2){
       Armstrong(n1);
        n1++;

    }
}
void Armstrong(int num){
    int y,z,c,rem[10],e[10],sum,i,f;
    y=num;
	z=num;
	c=0;
	sum=0;
	while(num>0)
	{                       //Digits Calculation
		num=num/10;
		c++;
	}
	for(i=0;i<=c;i++)
	{	rem[i]=y%10;           //Digit Seperation
		y=y/10;


	}
	for(i=0;i<=c;i++)
	{      e[i]=pow(rem[i],c);          //calculating power of each digit
	}

	for(i=0;i<=c;i++)
	{	sum+=e[i];                       //Adding Digits
	}
	if(z == sum){
        printf(" %d",z);                            //Checking Armstrong
	}
}
