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
    vector< pair<ll,char> >v;
    for(int i=0; i<n; i++)
    {
        if(s[i]!=s1[i])
        {

            v.push_back({i,s[i]});
        }
    }
    if(v.size()<=1)
    {
        cout<<v.size()<<endl;
    }
    else
    {
        ll cnt=0;
        for(int i=0; i<v.size()-1; i++)
        {
            if(abs(v[i].first-v[i+1].first)==1 && v[i].second!=v[i+1].second)
            {
                cnt++;
                i++;
            }
        }
        ll d=v.size()-2*cnt;
        cout<<cnt+d<<endl;
    }
}
