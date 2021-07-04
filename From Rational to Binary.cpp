///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    map<ll,ll>m;
    ll d=1;
    while(d<=1000000000000000000)
    {
        m[d]++;
        d*=2;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        int mark=0;
        if(m[b]>0)
        {
            mark=1;
        }
        if(mark==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}

