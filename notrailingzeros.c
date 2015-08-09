#include <iostream>
using namespace std;

/* Find no of trailing zeros in factorial of number */
/* check the link : http://www.spoj.com/problems/FCTRL/ */
 
int findTrailingZeros(long n)
{
    int count = 0;
 
    for (int i=5; n/i>=1; i *= 5)
          count += n/i;
 
    return count;
}
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    long no;
    cin>>no; 
    cout <<findTrailingZeros(no)<<endl;
    }
    return 0;
}
