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
        ll sum=0,avg,ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n>0)
        {
            cout<<-1<<endl;
        }
        else
        {
            avg=sum/n;
            for(int i=0; i<n; i++)
            {
                if(arr[i]>avg)
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }
}
