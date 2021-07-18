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
        ll n,a,x,y;
        cin>>n>>a>>x>>y;
        if(n<=a)
        {
            cout<<n*x<<endl;
        }
        else
        {
            cout<<(a*x)+((n-a)*y)<<endl;
        }
    }
}

