///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1,c=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll mat[2*n+5][n+5];
        for(int i=0; i<2*n+5; i++)
        {
            for(int j=0; j<n+5; j++)
            {
                mat[i][j]=0;
            }
        }
        for(int i=1; i<2*n; i++)
        {
            ll d;
            if(i>n)
            {
                d=n-i%n;
            }
            else
            {
                d=i;
            }
            for(int j=1; j<=d; j++)
            {
                ll a;
                cin>>a;
                mat[i][j]=a;
            }
        }
        if(n==1)
        {
            cout<<"Case "<<c++<<": "<<mat[1][1]<<endl;
            continue;
        }
        for(int i=2; i<2*n; i++)
        {
            ll d;
            if(i>n)
            {
                d=n-i%n;
                for(int j=1; j<=d; j++)
                {
                    mat[i][j]+=max(mat[i-1][j],mat[i-1][j+1]);
                }
            }
            else
            {
                for(int j=1; j<=i; j++)
                {
                    mat[i][j]+=max(mat[i-1][j],mat[i-1][j-1]);
                }
            }
        }
        cout<<"Case "<<c++<<": "<<mat[2*n-1][1]<<endl;
    }
}
