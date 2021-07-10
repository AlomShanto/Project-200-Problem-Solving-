///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    FastRead
    string s;
    cin>>s;
    ll ans=0;
    for(ll i=0; i<s.length(); i++)
    {
        if(i==0)
        {
            ll d=s[i]-'0';
            if(d%4==0)
            {
                ans++;
            }
        }
        else
        {
            ll d=(s[i]-'0');
            if(d%4==0)
            {
                ans++;
            }
            d+=(s[i-1]-'0')*10;
            if(d%4==0)
            {
                ans+=i;
            }

        }
    }
    cout<<ans<<endl;
}
