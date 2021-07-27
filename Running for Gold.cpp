///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll mat[n+10][10];
        ll mark=0,ans=0;
        for(int i=0; i<n; i++)
        {
            ll sum=0;
            for(int j=0; j<5; j++)
            {
                scanf("%lld",&mat[i][j]);
                if(i>0)
                {
                    if(mat[i][j]<mat[ans][j])
                    {
                        sum++;
                    }
                }
            }
            if(sum>=3)
            {
                ans=i;
            }
        }
        for(int i=0; i<n; i++)
        {
            ll sum=0;
            for(int j=0; j<5; j++)
            {
                if(mat[i][j]<mat[ans][j])
                {
                    sum++;
                }
            }
            if(sum>=3)
            {
                ans=-2;
                break;
            }
        }
        //cout<<ans<<endl;
        printf("%lld\n",ans+1);
    }
}
