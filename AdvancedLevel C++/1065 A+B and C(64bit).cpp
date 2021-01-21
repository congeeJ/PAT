#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int tcase=0;
	long long a,b,c;
	long long sum;
	bool ans;
	while(t--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);//此步若为 cin>>a>>b>>c 在vs2010中可以正确运行，但却无法通过第三个测试点
		sum=a+b;
		cout<<sum<<endl;
		if(a>0&&b>0&&sum<0)
			ans=true;
		else if(a<0&&b<0&&sum>=0)
			ans=false;
		else if(sum>c)
			ans=true;
		else
			ans=false;
		tcase++;
		if(ans==true)
			cout<<"Case #"<<tcase<<": true"<<endl;
		else
			cout<<"Case #"<<tcase<<": false"<<endl;
	}
	return 0;
}
