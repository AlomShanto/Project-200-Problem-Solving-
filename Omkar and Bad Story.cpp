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
        map<ll,ll>m;
        ll mark=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                mark=1;
            }
        }
        if(mark==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<101<<endl;
            for(int i=0; i<=100; i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
