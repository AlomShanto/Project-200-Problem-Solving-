///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll d=0,k=0;
        map<pair<ll,ll>,ll>m;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='D')
            {
                d++;
            }
            else
            {
                k++;
            }
            if(d*k==0)
            {
                cout<<d+k<<" ";
            }
            else
            {
                ll gcd=__gcd(d,k);
                ll a=d/gcd;
                ll b=k/gcd;
                m[{a,b}]++;
                cout<<m[{a,b}]<<" ";
            }
        }
        cout<<endl;
    }
}
