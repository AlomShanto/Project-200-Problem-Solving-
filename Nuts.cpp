///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n,ans=0;
    cin>>n;
    while(n--)
    {
        ll d;
        cin>>d;
        if(d>=10)
        {
            d-=10;
            ans+=d;
        }
    }
    cout<<ans<<endl;
}

