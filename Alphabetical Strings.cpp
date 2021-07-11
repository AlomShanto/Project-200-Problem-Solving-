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
        string s;
        cin>>s;
        ll l,r;
        ll cnt=1,mark=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a')
            {
                mark=1;
                l=i-1;
                r=i+1;
            }
        }
        if(mark==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        char ch;
        while(cnt<s.length())
        {
            ll l1,r1;
            l1=l;
            r1=r;
            //cout<<l<<" "<<r<<endl;
            ch=cnt+97;
            //cout<<ch<<endl;
            cnt++;
            if(l>=0)
            {
                if(s[l]==ch)
                {
                    l--;
                }
                else if(r<s.length())
                {
                    if(s[r]==ch)
                    {
                        r++;
                    }
                }
                else
                {
                    mark=0;
                    break;
                }
            }
            else
            {
                if(r<s.length())
                {
                    if(s[r]==ch)
                    {
                        r++;
                    }
                }
                else
                {
                    mark=0;
                    break;
                }
            }
            if(l1==l && r1==r)
            {
                mark=0;
                break;
            }
        }
        if(mark==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
