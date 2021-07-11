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
        ll n;
        cin>>n;
        ll arr[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll cnt=0;
        for(int i=0; i<n; i++)
        {
            arr[i]=arr[i]-cnt;
            cnt++;
            ll d=0;
            arr[i]=max(arr[i],d);
        }
        ll mod=1000000007;
        ll ans=1;
        for(int i=0; i<n; i++)
        {
            ans=ans*arr[i];
            ans=ans%mod;
        }
        cout<<ans<<endl;
    }
}

