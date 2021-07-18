///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n+10];
        map<ll,ll>m;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i<k)
            m[arr[i]]++;
        }
        ll mn=m.size();
        ll mx=mn;
        for(int i=k; i<n; i++)
        {
            m[arr[i-k]]--;
            //cout<<m[arr[i-k]]<<" ";
            if(m[arr[i-k]]==0)
            {
                mn--;
            }
            //cout<<mn<<endl;
            if(m[arr[i]]==0)
            {
                mn++;
            }
            m[arr[i]]++;
            mx=max(mx,mn);
        }
        cout<<mx<<endl;
    }
}

