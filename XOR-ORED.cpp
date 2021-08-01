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
        ll ar[100]={0};
        ll arr[n+10];
        ll mx=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            ll d=arr[i];
            string s="";
            while(d>0)
            {
                if(d%2==0)
                {
                    s+='0';
                }
                else
                {
                    s+='1';
                }
                d/=2;
            }
            ll len=s.length();
            mx=max(mx,len);
            //cout<<s<<endl;
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]=='1')
                {
                    ar[j]++;
                }
            }
        }
        ll d1=(n+1)/2;
        string s1="";
        for(int i=0; i<mx; i++)
        {
            //cout<<ar[i]<<" ";
            if(ar[i]>=d1)
            {
                s1+='1';
            }
            else
            {
                s1+='0';
            }
        }
        //cout<<s1<<endl;
        ll ans=0,d2=0;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]=='1')
            {
                ll d3=pow(2,d2);
                ans+=d3;
            }
            d2++;
        }
        ll ans1=0;
        for(int i=0; i<n; i++)
        {
            arr[i]^=ans;
            ans1|=arr[i];
        }
        cout<<ans<<" "<<ans1<<endl;
    }
}

