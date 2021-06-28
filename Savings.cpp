///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    ll x=sqrt(n);
    ll d=(x*(x+1))/2;
    while(d<n)
    {
        x++;
        d=(x*(x+1))/2;
    }
    cout<<x<<endl;
}

