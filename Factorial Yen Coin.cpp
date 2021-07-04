///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll p;
    cin>>p;
    vector<ll>v;
    ll d=1,n=1;
    while(d<=10)
    {
        n*=d;
        v.push_back(n);
        d++;
    }
    reverse(v.begin(),v.end());
    ll ans=0;
    for(int i=0; i<v.size(); i++)
    {
        if(p==0)
        {
            break;
        }
        if(v[i]>p)
        {
            continue;
        }
        else
        {
            ll d=p/v[i];
            if(d>100)
            {
                d=100;
                p=p-100*v[i];
                ans+=100;
                continue;
            }
            p=p%v[i];
            ans+=d;
        }
    }
    cout<<ans<<endl;
}

