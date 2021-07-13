///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    ll n,k;
    cin>>n>>k;
    vector< pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        v.push_back({a,i+1});
    }
    srt(v);
    reverse(v.begin(),v.end());
    cout<<v[k-1].first<<endl;
    vector<ll>ans;
    for(int i=0; i<k; i++)
    {
        ans.push_back(v[i].second);
    }
    srt(ans);
    for(int i=0; i<k; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
