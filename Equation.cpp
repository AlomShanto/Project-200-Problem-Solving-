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
        if(n%2==0)
        {
            cout<<n+4<<" "<<4<<endl;
        }
        else
        {
            ll d=n+4;
            while(d%3>0 || d%2==0)
            {
                d++;
            }
            cout<<d<<" "<<d-n<<endl;
        }
    }
}
