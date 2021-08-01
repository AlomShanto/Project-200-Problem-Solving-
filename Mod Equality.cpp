///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>m;
        ll arr[n+10];
        ll mn=1e18;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mn=min(mn,arr[i]);
            m[arr[i]]++;
        }
        ll mark=0;
        for(int i=0; i<n; i++)
        {
            ll d=(arr[i]-mn);
            if(d<=mn && d>0)
            {
                mark=1;
                break;
            }
        }
        //cout<<mn<<" "<<mark<<" "<<m[mn]<<endl;
        if(mn==0)
        {
            cout<<n-m[mn]<<endl;
        }
        else if(mark==1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n-m[mn]<<endl;
        }
    }
}

