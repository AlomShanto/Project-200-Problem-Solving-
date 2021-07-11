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
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        ll arr[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2==1)
            {
                sum+=(arr[i]-1);
            }
            else
            {
                sum+=arr[i];
            }
        }
        if(sum<=k)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
