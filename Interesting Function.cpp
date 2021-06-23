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
        ll l,r;
        cin>>l>>r;
        ll ans=0,ans1=0;
        ll d=r/1000000000;
        ans+=d*1111111111;
        r=r%1000000000;
        d=r/100000000;
        ans+=d*111111111;
        r=r%100000000;
        d=r/10000000;
        ans+=d*11111111;
        r=r%10000000;
        d=r/1000000;
        ans+=d*1111111;
        r=r%1000000;
        d=r/100000;
        ans+=d*111111;
        r=r%100000;
        d=r/10000;
        ans+=d*11111;
        r=r%10000;
        d=r/1000;
        ans+=d*1111;
        r=r%1000;
        d=r/100;
        ans+=d*111;
        r=r%100;
        d=r/10;
        ans+=d*11;
        r=r%10;
        ans+=r;


        d=l/1000000000;
        ans1+=d*1111111111;
        l=l%1000000000;
        d=l/100000000;
        ans1+=d*111111111;
        l=l%100000000;
        d=l/10000000;
        ans1+=d*11111111;
        l=l%10000000;
        d=l/1000000;
        ans1+=d*1111111;
        l=l%1000000;
        d=l/100000;
        ans1+=d*111111;
        l=l%100000;
        d=l/10000;
        ans1+=d*11111;
        l=l%10000;
        d=l/1000;
        ans1+=d*1111;
        l=l%1000;
        d=l/100;
        ans1+=d*111;
        l=l%100;
        d=l/10;
        ans1+=d*11;
        l=l%10;
        ans1+=l;
        //cout<<ans<<" "<<ans1<<endl;
        cout<<ans-ans1<<endl;
    }
}
