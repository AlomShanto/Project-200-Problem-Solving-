///BISMILLAHIR-RAHAMANIR-RAHIM///
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
        ll tot=(n*(n+1))/2;
        if(n==m)
        {
            cout<<tot<<endl;
        }
        else if(m==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ll d=(n-m)/(m+1);
            ll d1=(n-m)%(m+1);
            ll d2=(m+1)-d1;
            ll extra1=d1*(((d+1)*(d+2))/2);
            ll extra2=d2*(((d+1)*(d))/2);
            //cout<<extra1<<" "<<extra2<<endl;
            cout<<tot-extra1-extra2<<endl;
        }
    }
}
