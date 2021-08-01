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
        if(n<=6)
        {
            cout<<15<<endl;
            continue;
        }
        ll ans=(n/6)*15;
        ans-=15;
        ll d1=n%6;
        d1+=6;
        if(d1>10)
        {
            ans+=30;
        }
        else if(d1>8)
        {
            ans+=25;
        }
        else if(d1>6)
        {
            ans+=20;
        }
        else
        {
            ans+=15;
        }
        cout<<ans<<endl;
    }
}
