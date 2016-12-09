//Armstrong Or Not
#include<stdio.h>
#include<math.h>
void main()
{	int z=0,y=0,num,rem[10],c=0,count=0,i,sum=0,e[10];
	clrscr();
	printf("Enter Number");
	scanf("%d",&num);
	y=num;
	z=num;
	while(num>0)
	{
		num=num/10;
		count++;
	}
	for(i=0;i<=count;i++)
	{	rem[i]=y%10;
		y=y/10;


	}
	for(i=0;i<=count;i++)
	{      e[i]=pow(rem[i],count);
	}

	for(i=0;i<=count;i++)
	{	sum+=e[i];
	}
	 if(z==sum)
	 printf("its an armstrong number");
	 else printf("its not");
	 getch();
}
