#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,mark=0;
	cin>>n;
	map<ll,ll>m;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		m[a]++;
		if(a>n || a<1 || m[a]>1)
		{
			mark=1;
		}
	}
	if(mark==0)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
