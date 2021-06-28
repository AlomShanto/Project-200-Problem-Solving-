#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,q;
	cin>>n>>q;
	vector<ll>v;
	map<ll,ll>m;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		m[a]++;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	while(q--)
	{
		ll k;
		cin>>k;
		ll d=upper_bound(v.begin(),v.end(),k)-v.begin();
		while(1)
		{
			ll d1=d;

	d=upper_bound(v.begin(),v.end(),d+k)-v.begin();
	if(d==d1)
	{
		cout<<d1+k<<endl;
		break;
	}
		}
	}
}
