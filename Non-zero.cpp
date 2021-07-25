#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
    while(t--)
	{
	ll n;
	cin>>n;
	ll arr[n+10];
	ll sum=0,z=0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]==0)
		{
			z++;
		}
		sum+=arr[i];
	}
	if(sum==0)
	{
		if(z==0)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<z<<endl;
		}
	}
	else
	{
		if(z==0)
		{
			cout<<0<<endl;
		}
		else
		{
			if(sum==(-1*z))
			{
				cout<<z+1<<endl;
			}
			else
			{
				cout<<z<<endl;
			}
		}
	}
	}
}
