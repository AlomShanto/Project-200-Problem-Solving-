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
        double a,b;
        cin>>a>>b;
        ll c=(a-b);
        double d=c/3.0;
        d+=b;
        printf("%.7lf\n",d);
    }
}

