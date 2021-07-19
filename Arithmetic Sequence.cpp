///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll d=a+c;
        ll d1=d/2;
        if(d1<b)
        {
            cout<<2*b-a-c<<endl;
        }
        else
        {
            if(d%2==0)
            {
                cout<<((a+c)/2)-b<<endl;
            }
            else
            {
                d++;
                d1++;
                cout<<(d1-b)+1<<endl;
            }
        }
    }
}

