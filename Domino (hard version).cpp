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
        ll n,m,k;
        cin>>n>>m>>k;
        ll d=(m/2)*n;
        ll to=(m*n)/2;
        ll d1=n-k%n;
        ll d2=m/2;
        ll mark=0;
        if(k>d)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(n==1 && (k*2!=m))
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(n==1 && (k*2==m))
        {
            cout<<"YES"<<endl;
            ll cnt=0;
            for(int i=0; i<m; i+=2)
            {
                if(cnt%2==0)
                {
                    cout<<"aa";
                }
                else
                {
                    cout<<"bb";
                }
                cnt++;
            }
            cout<<endl;
            continue;
        }
        else
        {
            ll mat[n+10][m+10];
            memset(mat, 0, sizeof(mat));
            if(n%2==1)
            {
                ll d3=m/2;
                k-=d3;
                if(k>=0)
                {
                    if(k%2==0)
                    {
                        cout<<"YES"<<endl;
                        mark=1;
                        ll cnt=0;
                        for(int i=0; i<m; i+=2)
                        {
                            mat[0][i]=1;
                            mat[0][i+1]=1;
                            if(cnt%2==0)
                            {
                                cout<<"aa";
                            }
                            else
                            {
                                cout<<"bb";
                            }
                            cnt++;
                        }
                        cout<<endl;
                        for(int i=1; i<n; i+=2)
                        {
                            for(int j=0; j<m; j+=2)
                            {
                                if(k>0)
                                {
                                    mat[i][j]=2;
                                    mat[i][j+1]=2;
                                    mat[i+1][j]=3;
                                    mat[i+1][j+1]=3;
                                    k-=2;
                                }
                                else
                                {
                                    mat[i][j]=4;
                                    mat[i][j+1]=5;
                                    mat[i+1][j]=4;
                                    mat[i+1][j+1]=5;
                                }
                            }
                        }
                        for(int i=1; i<n; i++)
                        {
                            ll cnt=0;
                            for(int j=0; j<m; j+=2)
                            {
                                if(mat[i][j]==mat[i][j+1] && mat[i][j]==2)
                                {
                                    if(cnt%2==1)
                                    {
                                        mat[i][j]='c';
                                        mat[i][j+1]='c';
                                    }
                                    else
                                    {
                                        mat[i][j]='d';
                                        mat[i][j+1]='d';
                                    }
                                    cnt++;
                                }
                                else if(mat[i][j]==mat[i][j+1] && mat[i][j]==3)
                                {
                                    if(cnt%2==1)
                                    {
                                        mat[i][j]='e';
                                        mat[i][j+1]='e';
                                    }
                                    else
                                    {
                                        mat[i][j]='f';
                                        mat[i][j+1]='f';
                                    }
                                    cnt++;
                                }
                            }
                        }
                        for(int i=0; i<m; i++)
                        {
                            ll cnt=0;
                            for(int j=1; j<n; j+=2)
                            {
                                if(mat[j][i]==mat[j+1][i] && mat[j][i]==4)
                                {
                                    if(cnt%2==1)
                                    {
                                        mat[j][i]='g';
                                        mat[j+1][i]='g';
                                    }
                                    else
                                    {
                                        mat[j][i]='h';
                                        mat[j+1][i]='h';
                                    }
                                    cnt++;
                                }
                                else if(mat[j][i]==mat[j+1][i] && mat[j][i]==5)
                                {
                                    if(cnt%2==1)
                                    {
                                        mat[j][i]='i';
                                        mat[j+1][i]='i';
                                    }
                                    else
                                    {
                                        mat[j][i]='j';
                                        mat[j+1][i]='j';
                                    }
                                    cnt++;
                                }
                            }
                        }
                        for(int i=1; i<n; i++)
                        {
                            for(int j=0; j<m; j++)
                            {
                                char ch=mat[i][j];
                                cout<<ch;
                            }
                            cout<<endl;
                        }
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                ll d3=m/2;
                if(k%2==0)
                {
                    cout<<"YES"<<endl;
                    for(int i=0; i<n; i+=2)
                    {
                        for(int j=0; j<m; j+=2)
                        {
                            if(k>0 && j!=m-1)
                            {
                                mat[i][j]=2;
                                mat[i][j+1]=2;
                                mat[i+1][j]=3;
                                mat[i+1][j+1]=3;
                                k-=2;
                            }
                            else
                            {
                                mat[i][j]=4;
                                mat[i][j+1]=5;
                                mat[i+1][j]=4;
                                mat[i+1][j+1]=5;
                            }
                        }
                    }
                    for(int i=0; i<n; i++)
                    {
                        ll cnt=0;
                        for(int j=0; j<m; j+=2)
                        {
                            if(mat[i][j]==mat[i][j+1] && mat[i][j]==2)
                            {
                                if(cnt%2==1)
                                {
                                    mat[i][j]='c';
                                    mat[i][j+1]='c';
                                }
                                else
                                {
                                    mat[i][j]='d';
                                    mat[i][j+1]='d';
                                }
                                cnt++;
                            }
                            else if(mat[i][j]==mat[i][j+1] && mat[i][j]==3)
                            {
                                if(cnt%2==1)
                                {
                                    mat[i][j]='e';
                                    mat[i][j+1]='e';
                                }
                                else
                                {
                                    mat[i][j]='f';
                                    mat[i][j+1]='f';
                                }
                                cnt++;
                            }
                        }
                    }
                    for(int i=0; i<m; i++)
                    {
                        ll cnt=0;
                        for(int j=0; j<n; j+=2)
                        {
                            if(mat[j][i]==mat[j+1][i] && mat[j][i]==4)
                            {
                                if(cnt%2==1)
                                {
                                    mat[j][i]='g';
                                    mat[j+1][i]='g';
                                }
                                else
                                {
                                    mat[j][i]='h';
                                    mat[j+1][i]='h';
                                }
                                cnt++;
                            }
                            else if(mat[j][i]==mat[j+1][i] && mat[j][i]==5)
                            {
                                if(cnt%2==1)
                                {
                                    mat[j][i]='i';
                                    mat[j+1][i]='i';
                                }
                                else
                                {
                                    mat[j][i]='j';
                                    mat[j+1][i]='j';
                                }
                                cnt++;
                            }
                        }
                    }
                    for(int i=0; i<n; i++)
                    {
                        for(int j=0; j<m; j++)
                        {
                            char ch=mat[i][j];
                            cout<<ch;
                        }
                        cout<<endl;
                    }
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}
