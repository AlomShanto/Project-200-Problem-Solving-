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
        ll n,a,b;
        cin>>n>>a>>b;
        vector<ll>v,v1;
        ll d=1;
        for(int i=1; i<=60; i++)
        {
            if(d<=32)
            {
                ll d1=pow(a,d);
                //cout<<d1<<endl;
                v.push_back(d1);
            }
            if(d<=60)
            {
                v1.push_back(b*d);
            }
            d++;
        }
        if(b==1 || n%b==1)
        {
            cout<<"YES"<<endl;
        }
        else if(a==1)
        {
            if(n%b==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            ll mark=0;
            for(int i=0; i<v.size(); i++)
            {
                ll d=n-v[i];
                if(d<0)
                {
                    continue;
                }
                if(d==0)
                {
                    mark=1;
                    break;
                }
                else
                {
                    for(int j=0; j<v1.size(); j++)
                    {
                        if(v1[j]>d)
                        {
                            break;
                        }
                        else if(d%v1[j]==0)
                        {
                            mark=1;
                            break;
                        }
                    }
                    if(mark==1)
                    {
                        break;
                    }
                }
            }
            if(mark==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
