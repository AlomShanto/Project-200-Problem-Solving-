///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,ans=0;
        cin>>n>>m;
        ll arr[n+10];
        ll ar[m+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        reverse(arr,arr+n);
        for(int j=1; j<=m; j++)
        {
            cin>>ar[j];
        }
        ll x=1;
        for(int i=0; i<n; i++)
        {
            if(ar[arr[i]]<=ar[x] || arr[i]<=x)
            {
                ans+=ar[arr[i]];
            }
            else
            {
                ans+=ar[x++];
            }
            //cout<<ans<<" ";
        }
        cout<<ans<<endl;
    }
}
