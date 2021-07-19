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
        ll n,p,k;
        cin>>n>>p>>k;
        ll arr[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans=0,ans1=0;
        ll sum=0,sum1=0;
        for(int i=1; i<n; i+=2)
        {
            sum1+=arr[i];
            if(sum1<=p)
            {
                ans1+=2;
            }
            else
            {
                sum1-=arr[i];
                sum1+=arr[i-1];
                if(sum1<=p)
                {
                    ans1++;
                }
                else
                {
                    sum1-=arr[i-1];
                }
                break;
            }
            if(i==n-2)
            {
                sum1+=arr[n-1];
                if(sum1<=p)
                {
                    ans1++;
                }
                else
                {
                    sum1-=arr[n-1];
                }
            }
        }
        for(int i=2; i<n; i+=2)
        {
            sum+=arr[i];
            if(sum<=p)
            {
                ans+=2;
            }
            else
            {
                sum-=arr[i];
                sum+=arr[i-1];
                if(sum<=p)
                {
                    ans+=2;
                    arr[0]=p+1;
                }
                else
                {
                    sum-=arr[i-1];
                }
                break;
            }
            if(i==n-2)
            {
                sum+=arr[n-1];
                if(sum<=p)
                {
                    ans+=2;
                    arr[0]=p+1;
                }
                else
                {
                    sum-=arr[n-1];
                }
            }
        }
        //cout<<sum<<" "<<ans<<endl;
        if(ans==0)
        {
            if(arr[1]<=p)
            {
                cout<<2<<endl;
            }
            else if(arr[0]<=p)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            if((sum+arr[0])<=p)
            {
                ans=max(ans+1,ans1);
                cout<<ans<<endl;
            }
            else
            {
                ans=max(ans,ans1);
                cout<<ans<<endl;
            }
        }
    }
}


