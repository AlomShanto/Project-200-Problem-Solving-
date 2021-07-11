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
        ll a,b;
        cin>>a>>b;
        if(b<a)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<b-a+1<<endl;
    }
}

