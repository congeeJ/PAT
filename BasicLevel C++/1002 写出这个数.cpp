#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string x;
	long long sum=0;//注意此处若是int也可以不会超范围
	string n;
	cin>>n;
	for(int i=0;i<n.length();i++)
	{
		sum+=(n[i]-'0');
	}
	x=to_string(sum);//将数字转化为字符串   在c++11标准中若int似乎也可以，但我在编译时不可，将sum改为long long类型才可
	for(int i=0;i<x.length();i++)
	{
		if(i==0)
			cout<<a[x[i]-'0'];
		else
			cout<<" "<<a[x[i]-'0'];
	}
	return 0;
}
