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
        string s,s1;
        cin>>s>>s1;
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]=='1')
            {
                if(i==0 && s[i]=='0')
                {
                    ans++;
                    s[i]='2';
                    s1[i]='0';
                }
                else if(i==0 && s[i+1]=='1' && i+1<n)
                {
                    ans++;
                    s[i+1]='2';
                    s1[i]='0';
                }
                else if(i>0 && s[i]=='0')
                {
                    ans++;
                    s[i]='2';
                    s1[i]='0';
                }
                else if(i>0 && s[i-1]=='1')
                {
                    ans++;
                    s[i-1]='2';
                    s1[i]='0';
                }
                else if(i<n-1 && s[i+1]=='1')
                {
                    ans++;
                    s[i+1]='2';
                    s1[i]='0';
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s1[i]=='1' && s[i]=='0')
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
