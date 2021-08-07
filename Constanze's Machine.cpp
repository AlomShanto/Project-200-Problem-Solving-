///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length(),mod=1000000007;
        ll arr[n+10];
        for(int i=0; i<n; i++)
        {
            if(s[i]=='w' || s[i]=='m')
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=1;
            }
        }
        ll rem=-1,d=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1] && i==1 && (s[i]=='u' || s[i]=='n'))
            {
                arr[i]=2;
                arr[i]%=mod;
            }
            else if(s[i]==s[i-1] && s[i-1]==s[i-2] && (s[i]=='u' || s[i]=='n'))
            {
                arr[i]=arr[i-1]+arr[i-2];
                rem=i-1;
                arr[i-2]=1;
                arr[i]%=mod;
            }
            else if(s[i]==s[i-1] && (s[i]=='u' || s[i]=='n'))
            {
                if(rem>=0)
                {
                    arr[rem]=1;
                    rem=-1;
                }
                arr[i]=2;
                arr[i]%=mod;
            }
        }
        if(rem>=0)
        {
            arr[rem]=min(arr[rem],d);
        }
        ll ans=1;
        for(int i=0; i<n; i++)
        {
            //cout<<arr[i]<<" ";
            ans*=arr[i];
            ans%=mod;
        }
        cout<<ans<<endl;
    }
}
