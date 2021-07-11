///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 100000
ll child[mx+10];
ll visited[mx+10];
ll dist[mx+10];
vector<ll>v[mx+10];
void dfs(ll src)
{
    visited[src]=1;
    for(int i=0; i<v[src].size(); i++)
    {
        if(visited[v[src][i]]==0)
        {
            dist[v[src][i]]=dist[src]+1;
            dfs(v[src][i]);
        }
    }
}
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        for(int i=0; i<n-1; i++)
        {
            ll a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            child[a]++;
            child[b]++;
        }
        for(ll i=1; i<=n; i++)
        {
            if(child[i]==1)
            {
                dist[i]=0;
                dfs(i);
                break;
            }
        }
        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            ll d=abs(dist[a]-dist[b]);
            if(d%2==0)
            {
                cout<<"Town"<<endl;
            }
            else
            {
                cout<<"Road"<<endl;
            }
        }
    }
}
