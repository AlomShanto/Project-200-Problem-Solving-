///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll c,b,r,d;
    ll re=0;
    cin>>c>>b>>r>>d;
    re=r;
    c=c+b;
    ll ans=1;
    double last=(double)c/(double)re;
    while(re*d<c)
    {
        re+=r;
        c+=b;
        double cur=(double)c/(double)re;
        if(cur>=last)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        else
        {
            last=cur;
            ans++;
        }
    }
    cout<<ans<<endl;
}

