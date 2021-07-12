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
        ll n,m;
        cin>>n>>m;
        ll arr[m+10]={0};
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<m; j++)
            {
                arr[j]+=s[j];
            }
        }
        for(int i=0; i<n-1; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<m; j++)
            {
                arr[j]-=s[j];
            }
        }
        string s2="";
        for(int i=0; i<m; i++)
        {
            char ch;
            ch=(char)arr[i];
            s2+=ch;
        }
        cout<<s2<<endl;
        cout.flush();
    }
}
