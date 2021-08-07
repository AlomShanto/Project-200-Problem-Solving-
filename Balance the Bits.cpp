///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s,s1="",s2="";
        cin>>s;
        ll cnt0=0,cnt1=0,d=0,d1=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        if(cnt0%2==1 || cnt1%2==1 || s[0]=='0' || s[n-1]=='0')
        {
            cout<<"NO"<<endl;
        }
        else
        {
            ll mark=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    if(d1<(cnt1)/2)
                    {
                        s1+='(';
                        s2+='(';
                    }
                    else
                    {
                        s1+=')';
                        s2+=')';
                    }
                    d1++;
                }
                else
                {
                    if(d%2==0)
                    {
                        s1+='(';
                        s2+=')';
                    }
                    else
                    {
                        s1+=')';
                        s2+='(';
                    }
                    d++;
                }
            }
            cout<<"YES"<<endl;
            cout<<s1<<endl;
            cout<<s2<<endl;
        }
    }
}
