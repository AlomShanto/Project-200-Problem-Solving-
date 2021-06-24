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
        ll n;
        cin>>n;
        ll arr[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll mn=1e18;
        ll mark=0;
        for(int i=0; i<n-1; i++)
        {
            ll d=abs(arr[i]-arr[i+1]);
            if(d<mn)
            {
                mn=d;
                mark=i;
            }
        }
        if(n==2)
        {
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        for(int i=mark+1; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        for(int i=0; i<=mark; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
