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
       deque< pair<ll,ll>>dq;
       vector< pair<ll,ll> >v;
       for(int i=0; i<n; i++)
       {
           ll a,b;
           cin>>a>>b;
           v.push_back({b,a});
       }
       srt(v);
       for(int i=0; i<v.size(); i++)
       {
           dq.push_back(v[i]);
       }
       ll sum=0,ans=0;
       while(dq.size()>0)
       {
           if(sum>=dq.front().first)
           {
               sum+=dq.front().second;
               ans+=dq.front().second;
               dq.pop_front();
           }
           else
           {
               ll need=dq.front().first;
               if((sum+dq.back().second)>=need)
               {
                   ll d=need-sum;
                   sum+=d;
                   dq.back().second-=d;
                   ans+=(d*2);
                   if(dq.back().second==0)
                   {
                       dq.pop_back();
                   }
               }
               else
               {
                   sum+=dq.back().second;
                   ans+=(dq.back().second*2);
                   dq.pop_back();
               }
           }
       }
       cout<<ans<<endl;
    }
}
