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
        ll m;
        cin>>m;
        ll mat[5][m+10];
        ll ar[m+10]= {0};
        ll ar2[m+10]= {0};
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>mat[i][j];
            }
        }
        for(int i=m-1; i>=1; i--)
        {
            ar[i]+=mat[0][i]+ar[i+1];
            ar2[i-1]+=mat[1][i-1]+ar2[i];
        }
        ll ans=0,mark=0;
        for(int i=0; i<m-1; i++)
        {
            ll d=ar2[0]-ar2[i+1];
            if(ar[i+1]<=d)
            {
                mark=1;
                d=ar2[0]-ar2[i];
                //cout<<d<<" "<<ar[i+1]<<endl;
                ans=max(ar[i+1],d);
                break;
            }
        }
        if(mark==0)
        {
            ans=ar2[0];
        }
        cout<<ans<<endl;

    }
}
