///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
ll mat[50+10][50+10];
ll n,m;
map< pair<ll,ll>,ll>mp;
void make_mat(ll i, ll j, ll val)
{
    //cout<<mp[{i,j}]<<" "<<i<<" "<<j<<" "<<val<<endl;
    if(mp[ {i,j}]==0 && i<n && j<m && i>=0 && j>=0 && (mat[i][j]==val || mat[i][j]==0))
    {
        mp[ {i,j}]=1;
        mat[i][j]=val;
        if(val==1)
        {
            val=2;
        }
        else
        {
            val=1;
        }
        make_mat(i,j+1,val);
        make_mat(i,j-1,val);
        make_mat(i+1,j,val);
        make_mat(i-1,j,val);
    }
    else
    {
        return;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        pair<ll,ll>p;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                mat[i][j]=0;
            }
        }
        ll mark=0;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<m; j++)
            {
                if(s[j]=='R')
                {
                    mat[i][j]=1;
                    mark=1;
                    p= {i,j};
                }
                else if(s[j]=='W')
                {
                    mat[i][j]=2;
                    mark=1;
                    p= {i,j};
                }
            }
        }
        if(mark==0)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(i%2==j%2)
                    {
                        cout<<"R";
                    }
                    else
                    {
                        cout<<"W";
                    }
                }
                cout<<endl;
            }
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<m; j++)
                {
                    if(mp[ {i,j}]==0 && mat[i][j]!=0)
                    {
                        make_mat(i,j,mat[i][j]);
                        //cout<<"XX"<<endl;
                    }
                }
            }
            mark=0;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                   // cout<<mat[i][j];
                    if(i==0 && j==0)
                    {
                        if(mat[i][j+1]==mat[i][j] && j+1<m)
                        {
                            mark=1;
                        }
                        if(mat[i+1][j]==mat[i][j] && i+1<n)
                        {
                            mark=1;
                        }
                    }
                    else if(i==0 && j==m-1)
                    {
                        if(mat[i][j-1]==mat[i][j] && j-1>=0)
                        {
                            mark=1;
                        }
                        if(mat[i+1][j]==mat[i][j] && i+1<n)
                        {
                            mark=1;
                        }
                    }
                    else if(i==n-1 && j==0)
                    {
                        if(mat[i][j+1]==mat[i][j] && j+1<m)
                        {
                            mark=1;
                        }
                        if(mat[i-1][j]==mat[i][j] && i-1>=0)
                        {
                            mark=1;
                        }
                    }
                    else if(i==n-1 && j==m-1)
                    {
                        if(mat[i][j-1]==mat[i][j] && j-1>=0)
                        {
                            mark=1;
                        }
                        if(mat[i-1][j]==mat[i][j] && i-1>=0)
                        {
                            mark=1;
                        }
                    }
                    else if(i==0)
                    {
                        if(mat[i][j]==mat[i][j-1] || mat[i][j]==mat[i][j+1] || (mat[i][j]==mat[i+1][j] && i+1<n))
                        {
                            mark=1;
                        }
                    }
                    else if(i==n-1)
                    {
                        if(mat[i][j]==mat[i][j-1] || mat[i][j]==mat[i][j+1] || (mat[i][j]==mat[i-1][j] && i-1>=0))
                        {
                            mark=1;
                        }
                    }
                    else if(j==0)
                    {
                        if(mat[i][j]==mat[i-1][j] || mat[i][j]==mat[i+1][j] || (mat[i][j]==mat[i][j+1] && j+1<m))
                        {
                            mark=1;
                        }
                    }
                    else if(i==n-1)
                    {
                        if(mat[i][j]==mat[i-1][j] || mat[i][j]==mat[i+1][j] || (mat[i][j]==mat[i][j-1] && j-1>=0))
                        {
                            mark=1;
                        }
                    }
                    else
                    {
                        if(mat[i][j]==mat[i-1][j] || mat[i][j]==mat[i+1][j] || mat[i][j]==mat[i][j-1] || mat[i][j]==mat[i][j+1])
                        {
                            mark=1;
                        }
                    }
                }
               // cout<<endl;
            }
            if(mark==0)
            {
                cout<<"YES"<<endl;
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<m; j++)
                    {
                        if(mat[i][j]==1)
                        {
                            cout<<"R";
                        }
                        else
                        {
                            cout<<"W";
                        }
                    }
                    cout<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        mp.clear();
    }
}
