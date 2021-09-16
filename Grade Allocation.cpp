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
        ll n,m;
        cin>>n>>m;
        ll sum=0;
        while(n--)
        {
            ll a;
            cin>>a;
            sum+=a;
        }
        ll ans=min(sum,m);
        cout<<ans<<endl;
    }
}
