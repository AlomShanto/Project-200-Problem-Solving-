///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 100000
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        ll ans[n+10]={0};
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i<(n-1))
            {
                string s="",s1="",s2="";
                ll d=arr[i];
                ll d2=arr[i+1];
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
                while(d2>0)
                {
                    if(d2%2==0)
                    {
                        s1+='0';
                    }
                    else
                    {
                        s1+='1';
                    }
                    d2/=2;
                }
                if(s1.length()<s.length())
                {
                    while(s1.length()<s.length())
                    {
                        s1+='0';
                    }
                }
                for(int j=0; j<s.length(); j++)
                {
                    if(s[j]==s1[j] && s[j]=='1')
                    {
                        s2+='0';
                    }
                    else if(s[j]==s1[j] && s[j]=='0')
                    {
                        s2+='0';
                    }
                    else if(s[j]!=s1[j] && s[j]=='0')
                    {
                        s2+='0';
                    }
                    else
                    {
                        s2+='1';
                    }
                }
                //cout<<s2<<" "<<s1<<" "<<s<<endl;
                ll d1=0;
                for(ll j=0; j<s2.length(); j++)
                {
                    if(s2[j]=='1')
                    {
                        d1+=pow(2,j);
                    }
                }
                ans[i+1]=d1;
                arr[i+1]=arr[i+1]^d1;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
