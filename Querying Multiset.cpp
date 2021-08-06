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
        ll n,sum=0;
        cin>>n;
        priority_queue<ll>pq;
        while(n--)
        {
            ll ty,x;
            cin>>ty;
            if(ty==1)
            {
                cin>>x;
                pq.push((x-sum)*-1);
            }
            else if(ty==2)
            {
                cin>>x;
                sum+=x;
            }
            else
            {
                ll ans=pq.top()*-1;
                pq.pop();
                cout<<ans+sum<<endl;
            }
        }
    }
}

