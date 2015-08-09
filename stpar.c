#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdio.h>

/* check problem description www.spoj.com/problems/STPAR/ */

using namespace std;
int main(void)
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
			break;
		int v;
		queue<int> Q;
		stack<int> S;
		for(int i=0;i<n;i++){
			cin>>v;
			Q.push(v);
		}

		int c=1;

		while(!Q.empty() || !S.empty())
		{
			if(!Q.empty() && Q.front()==c)
			{
				c++;
				Q.pop();
			} 
			else
			{
				if(!S.empty()&&S.top()==c)
				{
					c++;
					S.pop();
				}
				else
				{
					if(!Q.empty())
					{
						int val=Q.front();
						Q.pop();
						S.push(val); 
					}
					else
						break;
				}
			}


		}
		if(c==n+1){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}

