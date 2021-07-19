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
        ll n,m;
        cin>>n>>m;
        if(n%2==1 && m%2==1)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    if(i==1 || i==n)
                    {
                        if(j%2==1)
                        {
                            cout<<1;
                        }
                        else
                        {
                            cout<<0;
                        }
                    }
                    else if(j==1 || j==m)
                    {
                        if(i%2==1)
                        {
                            cout<<1;
                        }
                        else
                        {
                            cout<<0;
                        }
                    }
                    else
                    {
                        cout<<0;
                    }
                }
                cout<<endl;
            }
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    if((i==1 && j==1) || (i==1 && j==m) || (i==n && j==1) || (i==n && j==m))
                    {
                        cout<<1;
                    }
                    else if(i==1 || i==n)
                    {
                        if(j>2 && j<m-1 && j%2==1)
                        {
                            cout<<1;
                        }
                        else
                        {
                            cout<<0;
                        }
                    }
                    else if((j==1 || j==m))
                    {
                        if(i>2 && i<n-1 && i%2==1)
                        {
                            cout<<1;
                        }
                        else
                        {
                            cout<<0;
                        }
                    }
                    else
                    {
                        cout<<0;
                    }
                }
                cout<<endl;
            }
        }
    }
}
