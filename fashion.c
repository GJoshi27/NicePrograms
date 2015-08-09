#include <stdio.h>
#include <stdlib.h>

/* check this link : http://www.spoj.com/problems/FASHION/ */



static int cmparr(const void *p1, const void *p2);

int main()
{
	int T;

	scanf("%d",&T);
	while(T--)
	{
               int n,i=0;
 		scanf("%d",&n);
                int menHot[n];	
                int GirlsHot[n];	
		for(i=0;i<n;i++)
		{
			scanf("%d",&menHot[i]);
		}

		qsort(&menHot,n,sizeof(int),cmparr);
/*		for(i=0;i<n;i++)
                printf("%d ",&menHot[i]);*/

		for(i=0;i<n;i++)
		{
			scanf("%d",&GirlsHot[i]);
		}
		qsort(&GirlsHot,n,sizeof(int),cmparr);
/*		for(i=0;i<n;i++)
                printf("%d ",&GirlsHot[i]);*/

               int sum=0;

		for(i=0;i<n;i++)
		{
                        sum=sum+(menHot[i]*GirlsHot[i]);
		}
		printf("%d\n",sum);
	}
	return 0;
}


static int cmparr(const void *p1, const void *p2)
{

	const int *ia = (const int *)p1; // casting pointer types 
	const int *ib = (const int *)p2;
        return (*ia - *ib);  
} 

