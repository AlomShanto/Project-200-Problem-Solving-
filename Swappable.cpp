///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    ll arr[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    srt(v);
    ll ans=(n*(n-1))/2;
    ll no=0;
    for(int i=0; i<v.size(); i++)
    {
        ll d=v[i];
        ll d1=lower_bound(v.begin(),v.end(),d)-v.begin();
        ll d2=upper_bound(v.begin(),v.end(),d)-v.begin();
        no+=(d2-d1-1);
    }
    cout<<ans-(no/2)<<endl;
}

