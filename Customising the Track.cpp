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
        ll n;
        cin>>n;
        ll sum=0,d,avg;
        ll arr[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        avg=sum/n;
        d=sum%n;
        ll d1=n-d;
        cout<<d1*d<<endl;
    }
}
