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
        ll a,b;
        cin>>a>>b;
        ll ans=abs(a-b);
        if(ans==0)
        {
            cout<<"0 0"<<endl;
        }
        else
        {
            ll d=a%ans;
            ll d1=ans-d;
            ll mn=min(d,d1);
            cout<<ans<<" "<<mn<<endl;
        }
    }
}
