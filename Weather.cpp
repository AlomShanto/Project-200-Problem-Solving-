///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    ll n;
    cin>>n;
    ll arr[n+10];
    ll d[n+10]={0};
    ll d1[n+10]={0};
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(i>1 && arr[i-1]>=0)
        {
            d[i]=1;
        }
        d[i]+=d[i-1];
    }
    for(int i=n; i>=0; i--)
    {
        if(i<n && arr[i+1]<=0)
        {
            d1[i]=1;
        }
        d1[i]+=d1[i+1];
    }
    ll mn=1e18;
    for(int i=1; i<=n; i++)
    {
        ll temp=d[i]+d1[i];
        //cout<<d[i]<<" "<<d1[i]<<endl;
        if(arr[i]==0)
        {
            temp++;
        }
        if(i==1 && arr[i]>=0)
        {
            temp++;
        }
        if(i==n && arr[i]<=0)
        {
            temp++;
        }
        mn=min(mn,temp);
    }
    cout<<mn<<endl;
}
