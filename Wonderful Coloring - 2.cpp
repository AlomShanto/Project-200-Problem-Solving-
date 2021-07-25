///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n+10];
        ll ar[n+10]={0};
        map<ll,ll>m;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        vector< pair<ll,ll> >v,v1;
        for(int i=0; i<n; i++)
        {
            if(m[arr[i]]>k)
            {
                m[arr[i]]--;
            }
            else if(m[arr[i]]==k)
            {
                v.push_back({arr[i],i});
            }
            else
            {
                v1.push_back({arr[i],i});
            }
        }
        srt(v);
        srt(v1);
        ll d=1;
        for(int i=0; i<v.size(); i++)
        {
            ar[v[i].second]=d;
            d++;
            if(d>k)
            {
                d=1;
            }
        }
        d=1;
        ll d2=v1.size()%k;
        for(int i=0; i<v1.size()-d2; i++)
        {
            ar[v1[i].second]=d;
            d++;
            if(d>k)
            {
                d=1;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}
