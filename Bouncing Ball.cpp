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
        ll n,p,k;
        cin>>n>>p>>k;
        ll cnt=0;
        string s;
        cin>>s;
        ll cost[2*n+10]={0};

        ll x,y;
        cin>>x>>y;
        for(int i=n-1; i>=(p-1); i--)
        {
            ll d1=0;
            if(s[i]=='0')
            {
                d1+=x;
            }
            if(i+k<n)
            {
                d1+=cost[i+k];
            }
            cost[i]=d1;
        }
        ll mn=1e18;
        for(int i=p-1; i<n; i++)
        {
            mn=min(mn,cost[i]+(cnt*y));
            cnt++;
        }
        cout<<mn<<endl;
    }
}

