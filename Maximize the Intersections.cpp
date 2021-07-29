///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[2*n+10]={0};
        vector<ll>v,v1,v2;
        while(k--)
        {
            ll a,b;
            cin>>a>>b;
            arr[a]=1;
            arr[b]=1;
            v.push_back(a);
            v1.push_back(b);
        }
        for(ll i=1; i<=2*n; i++)
        {
            if(arr[i]==0)
            {
                v2.push_back(i);
            }
        }
        ll d=v2.size()/2;
        for(ll i=0; i<d; i++)
        {
            v.push_back(v2[i]);
            v1.push_back(v2[i+d]);
        }
        ll ans=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]>v1[i])
            {
                swap(v[i],v1[i]);
            }
        }
        //cout<<v.size()<<" "<<v1.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v1.size(); j++)
            {
                if(v[i]<v[j] && v[j]<v1[i] && v1[i]<v1[j])
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
