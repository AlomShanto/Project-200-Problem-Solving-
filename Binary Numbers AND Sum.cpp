///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 200000
ll ar[mx+10];
int main()
{
    //FastRead
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        map<ll,ll>mp;
        ll po=1,mod=998244353;
        mp[0]=1;
        for(ll i=1; i<=200000; i++)
        {
            po*=2;
            po%=mod;
            mp[i]=po;
        }
        ll arr[n+10]={0};
        ll ar[m+10]={0};
        ll d=min(m-1,n-1),sum=0;
        string s,s1;
        cin>>s>>s1;
        reverse(s.begin(),s.end());
        reverse(s1.begin(),s1.end());
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]=='0')
            {
                if(i>0)
                {
                    ar[i]=ar[i-1];
                }
            }
            else
            {
                sum++;
                if(i>0)
                {
                    ar[i]=ar[i-1]+1;
                }
                else
                {
                    ar[i]=sum;
                }
            }
        }
        for(ll i=0; i<=d; i++)
        {
            if(s[i]=='1')
            {
                arr[i]=sum-ar[i];
                if(s1[i]=='1')
                {
                    arr[i]++;
                }
            }
        }
        ll ans=0;
        for(ll i=0; i<=d; i++)
        {
            ans+=((arr[i]*mp[i])%mod);
            ans=ans%mod;
           // cout<<ans<<" "<<arr[i]<<" "<<mp[i]<<endl;;
        }
        cout<<ans<<endl;
    }
}
