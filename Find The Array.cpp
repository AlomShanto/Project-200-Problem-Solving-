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
        ll ans=1;
        ll d=1,sum=1;
        while(sum<n)
        {
            d+=2;
            sum+=d;
            ans++;
        }
        cout<<ans<<endl;
    }
}
