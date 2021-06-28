///BISMILLAHIR-RAHAMANIR-RAHIM///
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
        ll n;
        cin>>n;
        ll mat[n+10][n+10];
        for(int i=0; i<=n+1; i++)
        {
            for(int j=0; j<=n+1; j++)
            {
                mat[i][j]=0;
            }
        }
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]=='1')
                {
                    mat[i][j+1]=1;
                }
                else
                {
                    mat[i][j+1]=0;
                }
            }
        }
        ll mark=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(mat[i][j]==1)
                {
                    if(i==n || j==n)
                    {
                        continue;
                    }
                    else
                    {

                        if(mat[i][j+1]==0 && mat[i+1][j]==0)
                        {
                            mark=1;
                        }
                    }
                }
               // cout<<i<<" "<<j<<" "<<mat[i+1][j]<<" "<<mat[i][j+1]<<" "<<mark<<endl;
            }
        }
        if(mark==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
