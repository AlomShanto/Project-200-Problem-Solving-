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
        ll arr[n+10];
        ll ar[n+10];
        ll sum=0,sum1=0;
        vector<int>v,v1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum1+=ar[i];
        }
        if(sum!=sum1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i]==ar[i])
                {
                    continue;
                }
                else if(arr[i]>ar[i])
                {
                    ll d=arr[i]-ar[i];
                    while(d--)
                    {
                        v.push_back(i+1);
                    }
                }
                else
                {
                    ll d=ar[i]-arr[i];
                    while(d--)
                    {
                        v1.push_back(i+1);
                    }
                }
            }
            if(v.size()==0)
            {
                cout<<0<<endl;
                continue;
            }
            cout<<v.size()<<endl;
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i]<<" "<<v1[i]<<endl;
            }
        }
    }
}
