///BISMILLAHIR-RAHMANIR-RAHIM///
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin()s.end())
#define mx 1000000
vector<pair<ll ,ll>>v[mx];
map<ll,ll>mp;
ll vis[mx];
void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    //cout<<"XX"<<endl;
    while(q.size()>0)
    {
        //cout<<"XX"<<endl;
        ll u = q.front();
        q.pop();
        if(vis[u]==1)
        {
            continue;
        }
        vis[u]=1;
        cout<<u<<" ";
        for(ll i=0; i<v[u].size(); i++)
        {
            ll a = v[u][i].first;
            ll b = v[u][i].second;
            mp[a]--;
            mp[b]--;
            if(mp[a]>=0 && mp[b]>=0)
            {
                if(mp[a]>mp[b])
                {
                    swap(a,b);
                }
                q.push(a);
                q.push(b);
            }
            else if(mp[a]>=0)
            {
                q.push(a);
            }
            else if(mp[b]>=0)
            {
                q.push(b);
            }
        }
    }
}
int main()
{

    ll n;
    cin>>n;

    for(ll i=0; i<n-2; i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        mp[a]++;
        mp[b]++;
        mp[c]++;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
        v[c].push_back({a,b});
    }

    ll src;

    for(ll i=1; i<=n; i++)
    {
        if(mp[i]==1)
        {
            bfs(i);
            break;
        }
    }

}
