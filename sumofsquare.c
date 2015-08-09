#include<iostream>
#include<math.h>


/* checking Given integer n decide if it is possible to represent it as a sum of two squares of integers. */

/* check link http://www.spoj.com/problems/TWOSQRS/ */

using namespace std;

bool isPerSq(long long n);
int main()
{

	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		if(n==1 || n==2){
			cout<<"Yes"<<endl;
			continue;
		}
		long long root=sqrt(n);
		long long res=root*root;
		if(res==n)
			cout<<"Yes"<<endl;
		else
		{
			long long i=0;
			long long rem=0;
			int chk=0;
			for(i=1;i<root;i++)
			{
				rem=n-(i*i);
				if(isPerSq(rem)){
					chk=1;
					break;
				}
				chk=0;
			}

			if(chk==1)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;

		}
	}

	return 0;
}

bool isPerSq(long long n)
{

	long long root=sqrt(n);
	if(root*root==n)
		return true;

	return false;

}
