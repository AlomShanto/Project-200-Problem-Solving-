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
        ll arr[n+10];
        vector< pair<ll,ll> >v,v1,v3;
        ll cnt=0,cnt1=0,cnt2=0,last=-1;
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                cnt2++;
            }
            else
            {
                if(last==-1 && cnt2>0)
                {
                    if(arr[i]%2==0)
                    {
                        v1.push_back({cnt2,2});
                    }
                    else
                    {
                        v1.push_back({cnt2,1});
                    }
                    last=i;
                }
                else if(cnt2>0)
                {
                    if(arr[i]%2==arr[last]%2 && arr[i]%2==0)
                    {
                        v.push_back({cnt2,2});
                    }
                    else if(arr[i]%2==arr[last]%2 && arr[i]%2==1)
                    {
                        v.push_back({cnt2,1});
                    }
                    else if(arr[i]%2!=arr[last])
                    {
                        ans++;
                    }
                    last=i;
                }
                else if(i>0 && arr[i]%2!=arr[i-1]%2)
                {
                    ans++;
                }
                cnt2=0;
                if(arr[i]%2==0)
                {
                    cnt++;
                }
                else
                {
                    cnt1++;
                }
                last=i;
            }
        }
        //cout<<"XX"<<endl;
        if(cnt2>0 && last!=-1)
        {
            if(arr[last]%2==0)
            {
                v1.push_back({cnt2,2});
            }
            else
            {
                v1.push_back({cnt2,1});
            }
        }
        srt(v);
        srt(v1);
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(cnt+cnt1==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cnt=(n/2)-cnt;
            cnt1=((n+1)/2)-cnt1;
            for(int i=0; i<v.size(); i++)
            {
                //cout<<v[i].first<<" "<<v[i].second<<" "<<cnt<<" "<<cnt2<<endl;
                if(v[i].second==2)
                {
                    if(cnt>=v[i].first)
                    {
                        cnt-=v[i].first;
                    }
                    else
                    {
                        v3.push_back(v[i]);
                    }
                }
                else
                {
                    if(cnt1>=v[i].first)
                    {
                        cnt1-=v[i].first;
                    }
                    else
                    {
                        v3.push_back(v[i]);
                    }
                }
            }
            //cout<<ans<<" "<<v1.size()<<" "<<cnt<<" "<<cnt1<<endl;
            for(int i=0; i<v1.size(); i++)
            {
                if(v1[i].second==2)
                {
                    if(cnt>=v1[i].first)
                    {
                        cnt-=v1[i].first;
                    }
                    else
                    {
                        ans++;
                    }
                }
                else
                {
                    if(cnt1>=v1[i].first)
                    {
                        cnt1-=v1[i].first;
                    }
                    else
                    {
                        ans++;
                    }
                }
            }
            //cout<<ans<<" "<<v3.size()<<endl;
            ans+=(v3.size())*2;
            cout<<ans<<endl;
        }
    }
}
