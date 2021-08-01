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
        ll x,y;
        cin>>x>>y;
        ll gcd=__gcd(x,y);
        if(gcd>1)
        {
            cout<<0<<endl;
        }
        else if((x%2==0 && y%2==1) || (x%2==1 && y%2==0))
        {
            cout<<1<<endl;
        }
        else
        {
            ll gcd1=__gcd(x,y+1);
            ll gcd2=__gcd(x+1,y);
            if(gcd1>1 || gcd2>1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }
}

