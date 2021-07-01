///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    vector< pair<pair<ll,ll>,ll>>v;
    for(int i=0; i<n; i++)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        v.push_back({{b,c},a});
    }
    srt(v);
    ll ans=0;
    for(int i=0; i<v.size()-1; i++)
    {
        pair<ll,ll>p;
        p=v[i].first;
        ll ty=v[i].second;
        ll l,r;
        l=p.first;
        r=p.second;
        for(int j=i+1; j<v.size(); j++)
        {
            pair<ll,ll>p1;
            p1=v[j].first;
            ll ty1=v[j].second;
            ll l1,r1;
            l1=p1.first;
            r1=p1.second;
            if(ty==1)
            {
                if(ty1==1 && (l1>=l && l1<=r || r1>=l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==2 && (l1>=l && l1<=r || r1>l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==3 && (l1>=l && l1<r || r1>=l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==4 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
            }
            else if(ty==2)
            {
                if(ty1==1 && (l1>=l && l1<r || r1>=l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==2 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==3 && (l1>=l && l1<r || r1>=l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==4 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
            }
            else if(ty==3)
            {
                if(ty1==1 && (l1>=l && l1<=r || r1>l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==2 && (l1>=l && l1<=r || r1>l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==3 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==4 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
            }
            else
            {
                if(ty1==1 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==2 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==3 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
                else if(ty1==4 && (l1>=l && l1<r || r1>l && r1<=r))
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}

