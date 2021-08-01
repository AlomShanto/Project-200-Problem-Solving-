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
        ll n,k;
        cin>>n>>k;
        ll arr[n+10];
        ll mn=-1e18;
        for(ll i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for(ll i=1; i<n; i++)
        {
            for(ll j=i+1; j<=min(n,i+100); j++)
            {
                ll d=i*j-k*(arr[i]|arr[j]);
                mn=max(mn,d);
            }
        }
        cout<<mn<<endl;
    }
}
