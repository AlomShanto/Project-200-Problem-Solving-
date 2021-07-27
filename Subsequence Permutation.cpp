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
       ll n;
       cin>>n;
       string s,s1;
       cin>>s;
       s1=s;
       srt(s);
       ll cnt=0;
       for(int i=0; i<n; i++)
       {
           if(s[i]==s1[i])
           {
               cnt++;
           }
       }
       cout<<n-cnt<<endl;
    }
}
