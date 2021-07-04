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
        if(s[0]=='1')
        {
            cout<<s[0]<<0;
            for(int i=1; i<s.length(); i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else
        {
            cout<<1<<s<<endl;
        }
    }
}

