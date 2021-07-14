///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll freq[200]={0};
        ll fre[200]={0};
        string s,s1;
        cin>>s>>s1;
        for(int i=0; i<n; i++)
        {
            freq[s[i]]++;
            fre[s1[i]]++;
        }
        ll mark=0;
        for(int i=97; i<97+26; i++)
        {
            //cout<<i<<" "<<fre[i]<<" "<<freq[i]<<endl;
            if(freq[i]<fre[i])
            {
                mark=1;
                break;
            }
            else
            {
                if(i==(97+25) && fre[i]!=freq[i])
                {
                    mark=1;
                    break;
                }
                ll d=freq[i]-fre[i];
                if(d%k>0)
                {
                    mark=1;
                    break;
                }
                else
                {
                    freq[i+1]+=d;
                }
            }
        }
        if(mark==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

