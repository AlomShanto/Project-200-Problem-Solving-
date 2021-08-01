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
        ll arr[n+10];
        ll mn=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                ll d=arr[i]*arr[i-1];
                mn=max(mn,d);
            }
        }
        cout<<mn<<endl;
    }
}
