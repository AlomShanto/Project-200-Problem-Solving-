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
        vector<ll>ans;
        string s;
        cin>>s;
        ll n=s.length();
        for(ll i=0; i<n; i++)
        {
            if(i<=n-5)
            {
                if(s[i]=='t' && s[i+1]=='w' && s[i+2]=='o' && s[i+3]=='n' && s[i+4]=='e')
                {
                    ans.push_back(i+3);
                    i+=3;
                }
                else if(s[i]=='o' && s[i+1]=='n' && s[i+2]=='e')
                {
                    ans.push_back(i+2);
                    i+=1;
                }
                else if(s[i]=='t' && s[i+1]=='w' && s[i+2]=='o')
                {
                    ans.push_back(i+2);
                    i+=1;
                }
            }
            else if(i<=n-3)
            {
                if(s[i]=='o' && s[i+1]=='n' && s[i+2]=='e')
                {
                    ans.push_back(i+2);
                    i+=1;
                }
                else if(s[i]=='t' && s[i+1]=='w' && s[i+2]=='o')
                {
                    ans.push_back(i+2);
                    i+=1;
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
