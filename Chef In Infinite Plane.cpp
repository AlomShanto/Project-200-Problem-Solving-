///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>m;
        ll arr[n+10];
        ll mx=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        map<ll,ll>:: iterator it;
        ll ans=0;
        for(it=m.begin(); it!=m.end(); it++)
        {
            ll d=it->first-1;
            ll d1=it->second;
            ll d2=min(d,d1);
            ans+=d2;
        }
        cout<<ans<<endl;
    }
}

