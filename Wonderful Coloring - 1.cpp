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
        string s;
        cin>>s;
        map<char,ll>m;
        for(int i=0; i<s.length(); i++)
        {
            m[s[i]]++;
        }
        ll d=0,d1=0;
        for(char i='a'; i<='z'; i++)
        {
            if(m[i]==1)
            {
                d1++;
            }
            else if(m[i]>=2)
            {
                d++;
            }
        }
        cout<<d+d1/2<<endl;
    }
}
