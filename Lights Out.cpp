///BISMILLAHIR-RAHAMNIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin().s.end())
int main()
{
    ll mat[5][5],ans[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            ans[i][j]=1;
            if(i>=1 && j>=1 && i<=3 && j<=3)
            {
                cin>>mat[i][j];
            }
        }
    }
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(mat[i][j]%2==1)
            {
                ans[i][j]=1-ans[i][j];
                ans[i][j-1]=1-ans[i][j-1];
                ans[i][j+1]=1-ans[i][j+1];
                ans[i+1][j]=1-ans[i+1][j];
                ans[i-1][j]=1-ans[i-1][j];
            }
        }
    }
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}
