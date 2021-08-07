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
        ll d=(sqrt(n));
        for(ll i=d; i>0; i--)
        {
            if(n%i==0)
            {
                ll gcd=__gcd(i,(n/i));
                ll lcm=(i*(n/i))/gcd;
                if(lcm==n)
                {
                    cout<<i<<" "<<n/i<<endl;
                    break;
                }
            }
        }
    }
}
