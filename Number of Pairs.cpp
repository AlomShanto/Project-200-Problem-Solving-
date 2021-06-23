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
        ll n,l,r;
        cin>>n>>l>>r;
        ll arr[n+10];
        vector<ll>v;
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
        }
        srt(v);
        for(int i=0; i<v.size(); i++)
        {
            ll d=lower_bound(v.begin(),v.end(),l-v[i])-v.begin();
            ll d1=upper_bound(v.begin(),v.end(),r-v[i])-v.begin();
            if(v[i]>=(l-v[i]) && v[i]<=(r-v[i]))
            {
                ans--;
            }
            ans+=(d1-d);
            //cout<<ans<<endl;
        }
        cout<<ans/2<<endl;
    }
}
