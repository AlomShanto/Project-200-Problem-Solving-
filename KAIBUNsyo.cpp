///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 200000
vector<ll>v[mx+10];
ll visited[mx+10];
ll ans=0;
void dfs(ll src)
{
    visited[src]=1;
    //cout<<ans<<" XX "<<endl;
    //cout<<v[src].size()<<" YY "<<endl;
    for(ll i=0; i<v[src].size(); i++)
    {
        if(visited[v[src][i]]==0)
        {
            ans++;
            dfs(v[src][i]);
        }
    }
}
int main()
{
    ll n;
    cin>>n;
    ll arr[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=(n-1)/2; i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            //cout<< arr[i]<<" "<<arr[n-i-1]<<endl;
             v[arr[i]].push_back(arr[n-i-1]);
             v[arr[n-i-1]].push_back(arr[i]);
        }
    }
    ll sum=0;
    for(ll i=1; i<=mx; i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
            sum+=ans;
            //cout<<ans<<endl;
            ans=0;
        }
    }
    cout<<sum<<endl;
}

