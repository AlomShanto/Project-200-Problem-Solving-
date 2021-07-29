///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll c=0,h=0,o=0,k=0,u=0,d=0,a=0,I=0,mod=1000000007;
        ll sumh=0,sumo=0,sumk=0,sumu=0,sumd=0,suma=0,sumi=0;
        string s;
        cin>>s;
        ll n=s.length();
        ll arr[n+10]={0};
        for(int i=0; i<n; i++)
        {
            if(s[i]=='c')
            {
                c++;
            }
            else if(s[i]=='h')
            {
                arr[i]=c;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='h')
            {
                h++;
                sumh+=arr[i];
                sumh%=mod;
                arr[i]=0;
            }
            else if(s[i]=='o')
            {
                arr[i]=sumh;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='o')
            {
                o++;
                sumo+=arr[i];
                sumo%=mod;
                arr[i]=0;
            }
            else if(s[i]=='k')
            {
                arr[i]=sumo;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='k')
            {
                k++;
                sumk+=arr[i];
                sumk%=mod;
                arr[i]=0;
            }
            else if(s[i]=='u')
            {
                arr[i]=sumk;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='u')
            {
                u++;
                sumu+=arr[i];
                sumu%=mod;
                arr[i]=0;
            }
            else if(s[i]=='d')
            {
                arr[i]=sumu;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='d')
            {
                d++;
                sumd+=arr[i];
                sumd%=mod;
                arr[i]=0;
            }
            else if(s[i]=='a')
            {
                arr[i]=sumd;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a')
            {
                a++;
                suma+=arr[i];
                suma%=mod;
                arr[i]=0;
            }
            else if(s[i]=='i')
            {
                arr[i]=suma;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='i')
            {
                k++;
                sumi+=arr[i];
                sumi%=mod;
                arr[i]=0;
            }
        }
        cout<<sumi<<endl;
    }
}

