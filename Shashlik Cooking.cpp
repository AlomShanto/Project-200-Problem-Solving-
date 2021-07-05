///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n,k;
    cin>>n>>k;
    ll d=2*k+1;
    ll d1=n%d;
    ll ans;
    if(d1==0)
    {
        ans=n/d;
    }
    else
    {
        ans=(n/d)+1;
    }
    if(d1==0)
    {
        cout<<ans<<endl;
        cout<<k+1<<" ";
        for(ll i=1; i<ans; i++)
        {
            cout<<k+1+(i*d)<<" ";
        }
        cout<<endl;
    }
    else if(d1<=k)
    {
        cout<<ans<<endl;
        cout<<1<<" ";
        for(ll i=1; i<ans; i++)
        {
            cout<<1+(i*d)<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<ans<<endl;
        cout<<d1-k<<" ";
        for(ll i=1; i<ans; i++)
        {
            cout<<d1-k+(i*d)<<" ";
        }
        cout<<endl;
    }
}
