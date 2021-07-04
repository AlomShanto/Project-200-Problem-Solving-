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
       ll d=3,lcm=2,gcd=2;
       vector<pair<ll,ll>>v;
       while(d<=40)
       {
           gcd=__gcd(lcm,d);
           lcm*=d;
           lcm/=gcd;
           //cout<<lcm<<" "<<gcd<<" "<<d<<endl;
           if(lcm%(d+1)>0)
           {
               v.push_back({lcm,d+1});
           }
           d++;
       }
       /*for(int i=0; i<v.size(); i++)
       {
           cout<<v[i].first<<" "<<v[i].second<<endl;
       }*/
       ll ans=0;
       reverse(v.begin(),v.end());
       for(int i=0; i<v.size(); i++)
       {
           if(i==0)
           {
               ll d=n/v[i].first;
               ans+=d*v[i].second;
               ans=ans%1000000007;
           }
           else
           {
               ll d=n/v[i].first;
               ll d1=d-n/v[i-1].first;
               //cout<<v[i].first<<" "<<v[i].second<<" "<<v[i-1].first<<" "<<v[i-1].second<<" "<<d<<" "<<d1<<endl;
               ans+=d1*v[i].second;
               ans=ans%1000000007;
           }
       }
       //cout<<ans<<endl;
       ans+=((n+1)/2)*2;
       ans=ans%1000000007;
       d=n/2;
       ans+=(d-(n/6))*3;
       ans=ans%1000000007;
       cout<<ans<<endl;
    }
}

