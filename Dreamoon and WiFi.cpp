///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
ll ans=0,ans1=0;
vector<ll>v;
map<ll,ll>m;
void recur(ll d, ll n)
{
    if(n==0)
    {
        v.push_back(d);
        m[d]++;
        return;
    }
    recur(d-1,n-1);
    recur(d+1,n-1);
}
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s>>s1;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='-')
            {
                ans--;
            }
            else
            {
                ans++;
            }
        }
        ll cnt=0;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]=='-')
            {
                ans1--;
            }
            else if(s1[i]=='+')
            {
                ans1++;
            }
            else
            {
                cnt++;
            }
        }
        if(ans==ans1 && cnt==0)
        {
            cout<<"1.000000000"<<endl;
            continue;
        }
        recur(ans1,cnt);
        double ans2;
        ans2=(double)m[ans]/(double)v.size();
        printf("%.9lf\n",ans2);
    }
}
