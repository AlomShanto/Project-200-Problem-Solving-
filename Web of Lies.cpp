///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 1000000
vector<ll>v[mx];
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll death[n+10]= {0};
        set<ll>st;
        for(ll i=1; i<=n; i++)
        {
            st.insert(i);
        }

        for(ll i=1; i<=m; i++)
        {
            ll a,b;
            cin>>a>>b;
            if(a>b)
            {
                death[b]++;
                if(st.find(b)!=st.end())
                {
                    st.erase(b);
                }
                if(death[a]==0)
                {
                    st.insert(a);
                }
            }
            else
            {
                death[a]++;
                if(st.find(a)!=st.end())
                {
                    st.erase(a);
                }
                if(death[b]==0)
                {
                    st.insert(b);
                }
            }
        }
        ll q;
        cin>>q;
        while(q--)
        {
            ll ty;
            cin>>ty;
            if(ty==1)
            {
                ll a,b;
                cin>>a>>b;
                if(a>b)
                {
                    death[b]++;
                    if(st.find(b)!=st.end())
                    {
                        st.erase(b);
                    }
                    if(death[a]==0)
                    {
                        st.insert(a);
                    }
                }
                else
                {
                    death[a]++;
                    if(st.find(a)!=st.end())
                    {
                        st.erase(a);
                    }
                    if(death[b]==0)
                    {
                        st.insert(b);
                    }
                }
            }
            else if(ty==2)
            {
                ll a,b;
                cin>>a>>b;
                if(a>b)
                {
                    death[b]--;
                    if(death[b]==0)
                    {
                        st.insert(b);
                    }
                }
                else
                {
                    death[a]--;
                    if(death[a]==0)
                    {
                        st.insert(a);
                    }
                }
            }
            else
            {
                cout<<st.size()<<endl;
            }
        }
    }
}
