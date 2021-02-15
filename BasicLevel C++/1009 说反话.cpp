#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	string n;
	stack<string> a;
	while(cin>>n)
		a.push(n);
	cout<<a.top();
	a.pop();
	while(a.empty()!=true)
	{
		cout<<" "<<a.top();
		a.pop();
	}
	return 0;
}
