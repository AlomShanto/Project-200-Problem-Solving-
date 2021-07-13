///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll mark=0,d;
        map<char,ll>mp;
        for(int i=0; i<s.length(); i++)
        {
            map<char,ll>m;
            ll cnt=0;
            for(int j=i; j<i+26 && j<s.length(); j++)
            {
                if(s[j]=='?')
                {
                    cnt++;
                }
                else
                {
                    m[s[j]]++;
                }
            }
            //cout<<m.size()<<" "<<cnt<<endl;
            if((m.size()+cnt)==26)
            {
                mark=1;
                d=i;
                mp=m;
                break;
            }
        }

        if(mark==1)
        {
            for(int i=d; i<d+26; i++)
            {
                if(s[i]=='?')
                {
                    for(int j='A'; j<='Z'; j++)
                    {
                        char ch=(char)j;
                        if(mp[ch]==0)
                        {
                            s[i]=ch;
                            mp[ch]++;
                            break;
                        }
                    }
                }
            }
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]=='?')
                {
                    cout<<"A";
                }
                else
                {
                    cout<<s[i];
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}
