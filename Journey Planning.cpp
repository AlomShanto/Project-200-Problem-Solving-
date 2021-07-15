///BISMILLAHIR-RAHAMNIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin().s.end())
int main()
{
    ll n;
    cin>>n;
    ll arr[n+10];
    map<ll,ll>m;
    ll mx=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        m[i-arr[i]]+=arr[i];
        mx=max(mx,m[i-arr[i]]);
    }
    cout<<mx<<endl;
}

