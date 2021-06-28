///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
ll visited[20000];
ll ans=0;
void dfs(ll src, vector<ll>v[])
{
    visited[src]=1;
    for(ll i=0; i<v[src].size(); i++)
    {
        if(visited[v[src][i]]==0)
        {
            ans++;
            //cout<<ans<<endl;
            dfs(v[src][i],v);
        }
    }
}
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v[n+10];
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    ll fans=0;
    for(ll i=1; i<=n; i++)
    {
        dfs(i,v);
        //cout<<ans<<endl;
        for(int i=0; i<=n; i++)
        {
            visited[i]=0;
        }
        fans+=ans;
        ans=0;
    }
    fans+=n;
    cout<<fans<<endl;
}

