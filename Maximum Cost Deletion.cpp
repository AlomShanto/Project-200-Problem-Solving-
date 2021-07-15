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
        ll n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        char ch=s[0];
        ll cnt=0,ans=0,part=1;
        for(int i=0; i<n; i++)
        {
            if(s[i]==ch)
            {
                cnt++;
            }
            else
            {
                ans+=(cnt*a)+b;
                cnt=1;
                part++;
                ch=s[i];
            }
        }
        ll d=(part/2)+1;
        if(b>=0)
        {
            ans=(a*n)+b*n;
        }
        if(b<0)
        {
            ans=a*n+(d*b);
        }
        cout<<ans<<endl;
    }
}
