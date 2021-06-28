///BISMILLAHIR-RAHAMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 1000000
vector<ll>v[mx+10];
ll visited[mx];
void dfs(ll src)
{
    visited[src]=1;
    for(int i=0; i<v[src].size(); i++)
    {
        if(visited[v[src][i]]==0)
        {
            dfs(v[src][i]);
        }
    }
}
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        ll ar[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            v[arr[i]].push_back(ar[i]);
            v[ar[i]].push_back(arr[i]);
        }
        ll ans=1;
        for(ll i=1; i<=n; i++)
        {
            if(visited[i]==0)
            {
                dfs(i);
                ans*=2;
                ans=ans%1000000007;
            }
        }
        cout<<ans<<endl;
        for(ll i=1; i<=n; i++)
        {
            visited[i]=0;
            v[i].clear();
        }
    }
}
