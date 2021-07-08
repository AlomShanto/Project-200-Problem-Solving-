///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    //FastRead
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,r;
        scanf("%d%d",&n,&r);
        int arr[n+10];
        int ar[n+10];
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int zero=0,mark=0,mark1=0;
        for(int i=1; i<=n; i++)
        {
            if(arr[i]==0)
            {
                zero++;
            }
            else
            {
                zero=1-r;
                mark1=1;
            }
            if(zero>(r-1))
            {
                mark=1;
                break;
            }
        }
        //cout<<"XX"<<endl;
        if(mark==1 || mark1==0)
        {
            printf("-1\n");
        }
        else
        {
            int ans=0,d;
            int i=r;
            i=min(i,n);
            while(i<=n)
            {
                i=min(i,n);
                if(i==n)
                {
                    for(int j=i; j>=i-(r-1) && j>0 ; j--)
                    {
                        if(arr[j]==1)
                        {
                            mark=1;
                            i=j;
                            ans++;
                            i+=(r-1);
                            d=i;
                            i+=r;
                            break;
                        }
                    }
                }
                else
                {
                    for(int j=i; j>=i-2*(r-1) && j>0 ; j--)
                    {
                        if(arr[j]==1)
                        {
                            mark=1;
                            i=j;
                            ans++;
                            i+=(r-1);
                            d=i;
                            i+=r;
                            break;
                        }
                    }
                }
                if(mark==0)
                {
                    mark=1;
                    break;
                }
                else
                {
                    mark=0;
                }
                if(d>=n)
                {
                    break;
                }
                else
                {
                    i=min(i,n);
                }
            }
            if(mark==1)
            {
                printf("-1\n");
                continue;
            }
            printf("%d\n",ans);
        }
    }
}
