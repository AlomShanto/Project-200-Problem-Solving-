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
        ll mx=0;
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++)
        {
            ll d=s[i]-'0';
            mx=max(mx,d);
        }
        cout<<mx<<endl;
    }
}
