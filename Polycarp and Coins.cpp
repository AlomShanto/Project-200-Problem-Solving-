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
        ll n;
        cin>>n;
        ll d=n/3;
        ll d2=d;
        ll d1=n%3;
        if(d1==1)
        {
            d++;
        }
        else if(d1==2)
        {
            d2++;
        }
        cout<<d<<" "<<d2<<endl;
    }
}
