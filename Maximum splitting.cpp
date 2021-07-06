///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0 && n>=4)
        {
            cout<<n/4<<endl;
        }
        else if(n%2==1 && (n>=13 || n==9))
        {
            n-=9;
            cout<<(n/4)+1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
