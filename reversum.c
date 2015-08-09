#include<stdio.h>
#include<stdlib.h>

/* Check this link www.spoj.com/problems/ADDREV/ */

int main(void)
{

	int n;
	scanf("%d",&n);

	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int Reva,Revb;
		Reva=reverse(a);
		Revb=reverse(b);
		int x=Reva+Revb;

		printf("%d\n",reverse(x));
	}

	return 0;
}

int reverse(int a)
{

	int Reva=0;
	int digit=0;
	while(a!=0)
	{
		digit=a%10;
		a=a/10;
		Reva=Reva*10+digit;
	}

	return Reva;
}

