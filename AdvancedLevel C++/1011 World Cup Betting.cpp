#include <iostream>
using namespace std;
int main()
{
	double m[3];
	char n[3];
	double x;
	double a,b,c;
	for(int i=0;i<3;i++)
	{
		x=-1;
		cin>>a;
		if(a>x)
		{
			x=a;
			n[i]='W';
		}
		cin>>b;
		if(b>x)
		{
			x=b;
			n[i]='T';
		}
		cin>>c;
		if(c>x)
		{
			x=c;
			n[i]='L';
		}
		m[i]=x;
	}
	cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<(m[0]*m[1]*m[2]*0.65-1)*2<<endl;
	return 0;
}
