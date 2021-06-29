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
        ll n,m,ans=0;
        cin>>n>>m;
        string s;
        cin>>s;
        ll x,y,mark=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                mark=1;
                x=i;
                break;
            }
        }
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                mark=1;
                y=i;
                break;
            }
        }
        if(mark==0)
        {
            cout<<0<<endl;
        }
        else
        {
            vector<ll>v;
            ans=1;
            ll sum=0;
            for(int i=x; i<=y; i++)
            {
                if(s[i]=='0')
                {
                    sum++;
                }
                else
                {
                    if(sum)
                    {
                        v.push_back(sum);
                        ans++;
                        sum=0;
                    }
                }
            }
            srt(v);
            ll sum1=0;
            for(int i=0; i<v.size(); i++)
            {
                if((m*v[i])<n)
                {
                    ans--;
                    sum1+=(m*v[i]);
                }
            }
            cout<<sum1+ans*n<<endl;
        }

    }
}
