/*-------------------- Check Emirp No. ------------------------*/
#include<stdio.h>
#include"D:\isPrime.h"
int main()
{
	int n,b,p1,p2,r,rev=0;
	printf("Enter any no ");
	scanf("%d",&n);
	p1=isPrime(n);
	if(p1==1)
	{
		while(n>0)
		{
			r=n%10;
			rev=rev*10+r;
			n=n/10;	
		}
		p2=isPrime(rev);
		if(p2==1)
		{
			printf("It is a Emirp no.");
		}
		else
		printf("it is not Emirp no. ");
	}
	else
		printf("Please enter a prime no!!!");
	
	
}