///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    vector<ll>v,v1;
    for(int i=0; i<n; i++)
    {
        v.push_back(s[i]-'0');
        v1.push_back(s1[i]-'0');
    }
    srt(v);
    srt(v1);
    ll d=v1.size()-1;
    ll d1=v.size()-1;
    ll ans1=0,ans2=0;
    while(d>=0)
    {
        if(d1>=0)
        {
            while(1 && d1>=0)
            {
                if(v1[d]>=v[d1])
                {
                    d--;
                    d1--;
                    break;
                }
                else
                {
                    ans1++;
                    d1--;
                }
            }
        }
        else
        {
            break;
        }
    }
    cout<<ans1<<endl;
    d=0;
    d1=0;
    while(d1<v.size())
    {
        if(d<v.size())
        {
            while(1)
            {
                if(d>=v.size())
                {
                    break;
                }
                if(v[d1]<v1[d])
                {
                    ans2++;
                    d++;
                    d1++;
                    break;
                }
                else
                {
                    d++;
                }
            }
        }
        else
        {
            break;
        }
    }
    cout<<ans2<<endl;
}
