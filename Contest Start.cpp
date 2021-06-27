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
        ll n,x,t;
        cin>>n>>x>>t;

        ll d=t/x;
        ll d1=n-d-1;
        ll ans=d1*d;
        ll d2=n-d1-1;
        ll ans1=(d2*(d2+1))/2;
        //cout<<ans<<endl;
        if(d>=n)
        {
            ll ans2=n*(n-1)/2;
            cout<<ans2<<endl;
            continue;
        }
        cout<<ans+ans1<<endl;

    }
}
