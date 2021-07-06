///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n,a,b,k;
    cin>>n>>a>>b>>k;
    vector<ll>v;
    ll arr[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        ll d=arr[i]%(a+b);
        if(d==0)
        {
            d=b;
            ll d1=((d-1)/a)+1;
            v.push_back(d1);
        }
        else
        {
            ll d1=((d-1)/a);
            v.push_back(d1);
        }
    }
    srt(v);
    ll ans=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]<=k)
        {
            ans++;
            k-=v[i];
        }
        else
        {
            break;
        }
    }
    cout<<ans<<endl;
}

