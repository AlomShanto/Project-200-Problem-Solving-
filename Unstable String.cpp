///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
//#define   FastRead   ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
int main()
{
    //FastRead;
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll ans=1;
        ll lb=0;
        ll lw=-1;
        ll d=0;
        char lok;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='?')
            {
                d++;
            }
            else
            {
                lok=s[i];
                break;
            }
        }
        vector<ll>lq;
        for(ll i=0; i<s.length(); i++)
        {
            if(s[i]=='?' && i==0)
            {
                lq.push_back(i);
            }
            else if(s[i]=='?' && s[i-1]!='?')
            {
                lq.push_back(i);
            }
        }
        if(s[0]=='?')
        {
            lw=0;
        }
        if(d==s.length())
        {
            cout<<d*(d+1)/2<<endl;
        }
        else
        {
            ll ans=d*(d+1)/2;
            ans+=d+1;
            for(ll i=d+1; i<s.length(); i++)
            {
                if(s[i]==lok)
                {
                    if(i>0 && s[i-1]=='?')
                    {
                        ll d1=upper_bound(lq.begin(),lq.end(),i)-lq.begin();
                        lb=lq[d1-1];
                        ans+=i-lb+1;
                        //continue;
                    }
                    else
                    {
                        ans++;
                        lb=i;
                    }
                }
                else
                {
                    if(s[i]=='?')
                    {
                        if(lok=='0')
                        {
                            lok='1';
                            ans+=i-lb+1;
                        }
                        else
                        {
                            lok='0';
                            ans+=i-lb+1;
                        }
                    }
                    else
                    {
                        ans+=i-lb+1;
                        lok=s[i];
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
}
