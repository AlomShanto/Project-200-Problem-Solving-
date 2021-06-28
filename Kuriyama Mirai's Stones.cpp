///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    ll arr[n+10];
    ll vi[n+10]={0};
    ll ui[n+10]={0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        vi[i+1]=vi[i]+arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        ui[i+1]=ui[i]+arr[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,l,r;
        cin>>a>>l>>r;
        if(a==1)
        {
            cout<<vi[r]-vi[l-1]<<endl;
        }
        else
        {
            cout<<ui[r]-ui[l-1]<<endl;
        }
    }
}
