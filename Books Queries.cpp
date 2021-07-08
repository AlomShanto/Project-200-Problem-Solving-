///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 200000
ll ar[mx+10];
int main()
{
    //FastRead
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll q;
        cin>>q;
        ll l=mx,r=mx+1;
        while(q--)
        {
            char ch;
            ll id;
            cin>>ch>>id;
            if(ch=='L')
            {
                ar[id]=l;
                l--;
            }
            else if(ch=='R')
            {
                ar[id]=r;
                r++;
            }
            else
            {
                ll d=ar[id];
                ll ans1=d-l-1;
                ll ans2=r-d-1;
                //cout<<l<<" "<<r<<" "<<d<<" "<<ans1<<" "<<ans2<<endl;
                ll ans=min(ans1,ans2);
                cout<<ans<<endl;
            }
        }
    }
}
