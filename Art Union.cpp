///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n,m;
    cin>>n>>m;
    ll mat[n+10][m+10];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            mat[i][j]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
            if(i==0 && j>0)
            {
                mat[i][j]+=mat[i][j-1];
            }
            if(j==0 && i>0)
            {
                mat[i][j]+=mat[i-1][j];
            }
        }
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
           ll d=max(mat[i-1][j],mat[i][j-1]);
           mat[i][j]+=d;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<mat[i][m-1]<<" ";
    }
    cout<<endl;
}
