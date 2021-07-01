///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    string s;
    cin>>s;
    ll o=0,w=0,tw=0;
    ll n=s.length();
    ll arr[n+10]={0};
    ll ar[n+10]={0};
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='o')
        {
            o++;
            arr[o]=w;
        }
        else if(i<s.length()-1 && s[i]==s[i+1])
        {
            w++;
        }
    }
    //cout<<o<<" "<<w<<endl;
    tw=w;
    w=0;
    o=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='o')
        {
            o++;
            ar[o]=tw-w;
        }
        else if(i<s.length()-1 && s[i]==s[i+1])
        {
            w++;
        }
    }
    ll ans=0;
    for(int i=1; i<=o; i++)
    {
        //cout<<arr[i]<<" "<<ar[i]<<endl;
        ans+=(arr[i]*ar[i]);
    }
    cout<<ans<<endl;
}
