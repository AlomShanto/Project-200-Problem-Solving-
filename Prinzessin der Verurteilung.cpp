///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
//#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    //FastRead
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        map<string,ll>m;
        for(int i=0; i<s.length(); i++)
        {
            string s1="";
            for(int j=i; j<s.length(); j++)
            {
                s1+=s[j];
                m[s1]++;
            }
        }
        vector<string>v;
        char ch='a';
        string s1="";
        for(int i=0; i<26; i++)
        {
            s1+=ch;
            v.push_back(s1);
            s1="";
            ch++;
        }
        s1="";
        //cout<<v.size()<<endl;
        for(int i=0; i<500; i++)
        {
            string s1=v[i];
            string s2=s1;
            for(int j=97; j<97+26; j++)
            {
                s1+=char(j);
                v.push_back(s1);
                s1=s2;
                //cout<<v.size()<<endl;
            }
        }
        //cout<<v.size()<<endl;
        //srt(v);
        for(int i=0; i<v.size(); i++)
        {
            if(m[v[i]]==0)
            {
                cout<<v[i]<<endl;
                break;
            }
        }
    }
}
