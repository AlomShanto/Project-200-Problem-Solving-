#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	if(e>f)
	{
		ll d1=min(a,d);
		ll d2=d-d1;
		d2=min(b,min(c,d2));
		cout<<d1*e+d2*f<<endl;
	}
	else
	{
		ll d1=min(b,min(c,d));
		ll d2=d-d1;
		d2=min(a,d2);
		cout<<d1*f+d2*e<<endl;
	}
}
