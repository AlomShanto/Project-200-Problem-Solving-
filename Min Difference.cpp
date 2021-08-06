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
        ll n,m;
        cin>>n>>m;
        vector<pair<ll,ll>>v;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back({a,1});
        }
        for(int i=0; i<m; i++)
        {
            ll a;
            cin>>a;
            v.push_back({a,2});
        }
        srt(v);
        ll mn=1e18;
        for(int i=1; i<v.size(); i++)
        {
            if(v[i].second!=v[i-1].second)
            {
                ll d=abs(v[i].first-v[i-1].first);
                mn=min(mn,d);
            }
        }
        cout<<mn<<endl;
    }
}

