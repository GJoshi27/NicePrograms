#include <iostream>
#include <set>
#include <map>
using namespace std;

/* check http://www.spoj.com/problems/RPLD/ */

int main ()
{
	int T;
	cin >> T;
                int j=0;
        while(T--)
	{
		bool P = true;
		map<int,set<int> > std;
		int N, L;
		cin >> N >> L;
		int i=0;
		for(i=0;i<L;i++)
		{
			int I, C;
			cin >> I >> C;
			pair<set<int>::iterator,bool> result = std[I].insert( C );
			if( result.second == false ) // duplicate
				P = false;
		}
		cout << "Scenario #" << j+1 << ": ";
		cout << ( ( P ) ? "possible" : "impossible" ) << endl;
                j++;
	}
}
