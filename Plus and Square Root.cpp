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
        ll ini=2;
        for(ll i=1; i<=n; i++)
        {
            ll d=i*(i+1);
            ll d1=(i+1)*(d)-(ini/i);
            ini=d;
            cout<<d1<<endl;
        }
    }
}
