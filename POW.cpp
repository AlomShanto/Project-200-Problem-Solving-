#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	if(c%2==1)
	{
		if(a==b)
		{
			cout<<"="<<endl;
		}
		else if(a>b)
		{
			cout<<">"<<endl;
		}
		else
		{
			cout<<"<"<<endl;
		}
	}
	else
	{
		a=abs(a);
		b=abs(b);
		if(a==b)
		{
			cout<<"="<<endl;
		}
		else if(a>b)
		{
			cout<<">"<<endl;
		}
		else
		{
			cout<<"<"<<endl;
		}
	}
}
