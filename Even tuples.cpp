///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll arr[n+10]={0};
        ll od[n+10]={0};
        ll ev[n+10]={0};
        for(int i=1; i<=n; i++)
        {
            ev[i]+=ev[i-1];
            od[i]+=od[i-1];
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                ev[i]++;
            }
            else
            {
                od[i]++;
            }
        }
        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            ll odd=od[b]-od[a-1];
            ll even=ev[b]-ev[a-1];
            ll d=0,d1=0;
            if(odd>=2)
            {
                d=((odd-1)*odd)/2;
            }
            if(even>=3)
            {
                d1=((even-2)*(even-1)*even)/6;
            }
            cout<<d*even+d1<<endl;
        }
    }
}


