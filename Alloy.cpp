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
        if(a>0 && b>0)
        {
            cout<<"Alloy"<<endl;
        }
        else if(a>0)
        {
            cout<<"Gold"<<endl;
        }
        else
        {
            cout<<"Silver"<<endl;
        }
    }
}

