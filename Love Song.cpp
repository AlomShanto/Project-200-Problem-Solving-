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
        ll n,q;
        cin>>n>>q;
        ll arr[n+10]={0};
        arr[0]=0;
        string s;
        cin>>s;
        for(ll i=0; i<n; i++)
        {
            ll d=s[i]-'0';
            d-=48;
            arr[i+1]=arr[i]+d;
        }
        /*for(ll i=0; i<=n; i++)
        {
            cout<<arr[i]<<" ";
        }*/
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            cout<<arr[r]-arr[l-1]<<endl;
        }
    }
}
