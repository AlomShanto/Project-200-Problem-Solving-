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
        if(n%2==1)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            ll mark=0,d=1,cnt=0;
            while(d<n)
            {
                d*=2;
                if(d==n)
                {
                    mark=1;
                    cnt++;
                }
                else if(d<n)
                {
                    cnt++;
                }
            }
            if(mark==1 && cnt%2==1)
            {
                cout<<"Bob"<<endl;
                continue;
            }
            cout<<"Alice"<<endl;
        }
    }
}
