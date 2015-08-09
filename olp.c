#include <iostream>
#include <stack>

/* Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). 
   Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ).
   Operands: only letters: a,b,...,z. 
   Assume that there is only one RPN form (no expressions like a*b*c). */

/* Check this for the description of problem link http://www.spoj.com/problems/ONP/ */
using namespace std;

int main() {

	int n;
	cin>>n;
//	cout<<n<<endl;
	string s; 

	while(n--)
	{
		int i=0;
		cin>>s;
		//stack<char> st;
		std::stack<char> st;
		while(s[i]!='\0') {

			if(s[i]=='(' || s[i]=='*' || s[i]=='+' || s[i] =='-' || s[i]== '/' || s[i]=='^')
				st.push(s[i]);
			else if(s[i]==')')
			{ 
				while(st.top()!='(')
				{
					cout<<st.top();
					st.pop();
				}
                           st.pop();
			}
			else
				cout<<s[i];
                    i++;   
		}

/*               while(!st.empty()){
               if(st.top() =='+' || st.top() =='*' || st.top()=='/' || st.top()=='-'|| st.top()=='^')
                 cout<<st.top();
               st.pop();
               }*/
           cout<<endl;

	}



	return 0;
}
