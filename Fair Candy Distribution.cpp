///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n,k;
    cin>>n>>k;
    ll d=k/n;
    k=k%n;
    ll arr[n+10];
    ll ar[n+10]={0};
    map<ll,ll>m;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        m[arr[i]]=i;
    }
    for(int i=0; i<n; i++)
    {
        ar[i]=d;
    }
    ll d1=0;
    map<ll,ll>:: iterator it;
    for(it=m.begin(); it!=m.end(); it++)
    {
        d1++;
        if(d1<=k)
        {
            ar[it->second]++;
        }
        else
        {
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
}

