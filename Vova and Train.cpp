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
        ll l1, v, l,r;
        cin>>l1>>v>>l>>r;
        ll d=l1/v;
        ll d1=(l-1)/v;
        ll d2=r/v;
        cout<<d-d2+d1<<endl;
    }
}
