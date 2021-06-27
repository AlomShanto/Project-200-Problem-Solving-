///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
       ll n,k,x;
       cin>>n>>k>>x;
       ll arr[n+10];
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       ll ans=1;
       vector< pair< ll,pair<ll,ll> > >v;
       for(int i=1; i<n; i++)
       {
          // cout<<arr[i]-arr[i-1]<<endl;
           if((arr[i]-arr[i-1])>x)
           {
               ans++;
               v.push_back({arr[i]-arr[i-1],{arr[i-1],arr[i]}});
           }
       }
       srt(v);
       //cout<<ans<<endl;
       for(int i=0; i<v.size(); i++)
       {
           ll d=(v[i].first-1)/x;
           if(k>=d && k>0)
           {
               k-=d;
               ans--;
           }
       }
       cout<<ans<<endl;
    }
}
