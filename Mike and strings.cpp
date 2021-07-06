///BISMILLAHIR-RAHMANIR-RAHIM///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
int main()
{
    ll n;
    cin>>n;
    vector<string>v;
    string s,s1,s2,s3;
    while(n--)
    {
        cin>>s;
        v.push_back(s);
    }
    ll mn=10000000;
    for(int i=0; i<v.size(); i++)
    {
        s1=v[i];
        ll ans=0;
        for(int j=0; j<v.size(); j++)
        {
            s2=v[j];
            s3="";
            ll d=0,mark=0;
            while(s2!=s1)
            {
                ans++;
                d++;
                for(int k=1; k<s2.length(); k++)
                {
                    s3+=s2[k];
                }
                s3+=s2[0];
                s2=s3;
                s3="";
                if(d>=60)
                {
                    mark=1;
                    break;
                }
            }
            if(mark)
            {
                ans=-1;
                break;
            }
        }
        mn=min(mn,ans);
    }
    cout<<mn<<endl;
}
