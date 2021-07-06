///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    string s,s1="";
    cin>>s;
    ll mark=0;
    vector<char>v;
    for(int i=0; i<s.length(); i++)
    {
        for(int j=i+1; j<s.length(); j++)
        {
            if(s[i]>s[j])
            {
                for(int k=j+1; k<s.length(); k++)
                {
                    if(s[j]>s[k])
                    {
                        mark=1;
                    }
                }
            }
        }
    }
    if(mark==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        s1=s;
        for(int i=0; i<s.length(); i++)
        {
            if(s1[i]!='0' && s1[i]!='1')
            {
                s1[i]='0';
            }
            for(int j=i+1; j<s.length(); j++)
            {
                if(s1[j]=='0' || s1[j]=='1')
                {
                    if(s1[i]==s1[j] && s[i]>s[j])
                    {
                        if(s1[j]=='0')
                        {
                            s1[i]='1';
                        }
                        else
                        {
                            s1[i]='0';
                        }
                        break;
                    }
                }
            }
            for(int j=i+1; j<s.length(); j++)
            {
                if(s[i]>s[j])
                {
                    if(s1[i]=='0')
                    {
                        s1[j]='1';
                    }
                    else
                    {
                        s1[j]='0';
                    }
                }
            }
        }
        cout<<s1<<endl;
    }
}


