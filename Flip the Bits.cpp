///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define rev(s) reverse(s.begin(),s.end())
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        rev(s);
        rev(s1);
        ll d=0,mark=0,cnt0=0,cnt1=0;
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
        for(int i=0; i<n; i++)
        {
            if(d%2==0)
            {
                if(s[i]==s1[i])
                {
                    if(s[i]=='0')
                    {
                        cnt0--;
                    }
                    else
                    {
                        cnt1--;
                    }
                }
                else if(cnt0==cnt1)
                {
                    d++;
                    if(s1[i]=='0')
                    {
                        cnt0--;
                    }
                    else
                    {
                        cnt1--;
                    }
                }
                else
                {
                    mark=1;
                    break;
                }
            }
            else
            {
                if(s[i]!=s1[i])
                {
                    if(s[i]=='0')
                    {
                        cnt1--;
                    }
                    else
                    {
                        cnt0--;
                    }
                }
                else if(cnt0==cnt1)
                {
                    d++;
                    if(s1[i]=='0')
                    {
                        cnt0--;
                    }
                    else
                    {
                        cnt1--;
                    }
                }
                else
                {
                    mark=1;
                    break;
                }
            }
        }
        if(mark==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
