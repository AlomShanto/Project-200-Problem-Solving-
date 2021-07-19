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
        ll ar[n+10]= {0};
        ll freq[n+10]= {0};
        ll ans=0;
        ll given[n+10]= {0};
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(freq[arr[i]]==0 && i!=arr[i])
            {
                ar[i]=arr[i];
                freq[arr[i]]++;
                ans++;
            }
        }
        cout<<ans<<endl;
        stack<ll>v;
        for(ll i=1; i<=n; i++)
        {
            if(freq[i]==0)
            {
                v.push(i);
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(ar[i]==0)
            {
                if(v.top()==i)
                {
                    ll d=v.top();
                    v.pop();
                    if(v.size()>0)
                    {
                        given[v.top()]=i;
                        ar[i]=v.top();
                        v.pop();
                        v.push(d);
                    }
                    else
                    {
                        ar[i]=ar[given[arr[i]]];
                        ar[given[arr[i]]]=d;
                        given[d]=i;
                    }
                }
                else
                {
                    ar[i]=v.top();
                    given[v.top()]=i;
                    v.pop();
                }
            }
            else
            {
                given[ar[i]]=i;
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}
