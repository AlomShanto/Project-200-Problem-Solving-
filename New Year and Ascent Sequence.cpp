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
       vector<ll>v,v1,v2;
       for(int i=0; i<n; i++)
       {
           ll l;
           cin>>l;
           ll arr[l+10];
           for(int i=0; i<l; i++)
           {
               cin>>arr[i];
           }
           ll mn=arr[0];
           ll mark=0;
           for(int i=1; i<l; i++)
           {
               if(mn<arr[i])
               {
                   mark=1;
               }
               mn=min(mn,arr[i]);
           }
           if(mark==1)
           {
               v2.push_back(arr[0]);
           }
           else
           {
               v.push_back(arr[0]);
               v1.push_back(arr[l-1]);
           }
       }
       ll ans=(v2.size()*n)+(v.size()*v2.size());
       //cout<<v.size()<<" "<<v1.size()<<" "<<v2.size()<<" "<<ans<<endl;
       srt(v);
       for(int i=0; i<v1.size(); i++)
       {
           ll d=upper_bound(v.begin(),v.end(),v1[i])-v.begin();
           //cout<<d<<" xx "<<v1[i]<<endl;;
           ans+=(v.size()-d);
       }
       cout<<ans<<endl;
    }
}
