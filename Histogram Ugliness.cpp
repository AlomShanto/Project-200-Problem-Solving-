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
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i==0)
            {
                ans+=arr[i];
            }
            else
            {
                ans+=abs(arr[i]-arr[i-1]);
                //cout<<ans<<endl;
                if(i==n-1)
                {
                    if(n==1)
                    {
                        continue;
                    }
                    ans+=arr[i];
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(i==0 && n>1)
            {
                if(arr[i]>arr[i+1])
                {
                    ans-=((abs(arr[i]-arr[i+1]))*2);
                    ans+=(abs(arr[i]-arr[i+1]));
                    arr[i]=arr[i+1];
                }
            }
            if(i==n-1 && n>1)
            {
                if(arr[i]>arr[i-1])
                {
                    ans-=((abs(arr[i]-arr[i-1]))*2);
                    ans+=(abs(arr[i]-arr[i-1]));
                    arr[i]=arr[i-1];
                }
            }
            if(i>0 && i<n-1)
            {
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                {
                    ll d=max(arr[i-1],arr[i+1]);
                    ans-=(abs(arr[i]-d))*2;
                    ans+=abs(arr[i]-d);
                    arr[i]=d;
                }
            }
            //cout<<i<<" "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}
