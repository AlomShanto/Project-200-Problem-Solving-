///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll mark=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                mark=i;
                break;
            }
        }
        if(mark%2==0)
        {
            cout<<"Takahashi"<<endl;
        }
        else
        {
            cout<<"Aoki"<<endl;
        }
    }
}

