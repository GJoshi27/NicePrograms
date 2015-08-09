#include <stdio.h>
#include <stdlib.h>

/* Check this link http://www.spoj.com/problems/ACPC10A/ */

int main()
{

	while(1)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(a==0 && b==0 && c==0)
			break;

		if((b-a)==(c-b)){
			printf("AP %d\n",c+(b-a));
			continue;
		}

		int r1=(b/a);
		int r2=(c/b);
		if(r1==r2)
			printf("GP %d\n",c*r1); 

	}
	return 0;
}

