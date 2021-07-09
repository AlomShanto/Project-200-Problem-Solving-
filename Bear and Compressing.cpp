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
        ll n,k;
        cin>>n>>k;
        vector< pair<string,string>>v;
        string s,s1;
        for(int i=0; i<k; i++)
        {
            cin>>s>>s1;
            v.push_back({s,s1});
        }
        char ch='a';
        vector<string>v2,v1;
        while(n--)
        {
            //cout<<v1.size()<<endl;
            if(v1.size()==0)
            {
                for(int i=0; i<v.size(); i++)
                {
                    if(ch==v[i].second[0])
                    {
                        v1.push_back(v[i].first);
                    }
                }
            }
            else
            {
                for(int i=0; i<v1.size(); i++)
                {
                    ch=v1[i][0];
                    for(int j=0; j<v.size(); j++)
                    {
                        if(ch==v[j].second[0])
                        {
                            s="";
                            s=v[j].first[0]+v1[i];
                            s[1]=v[j].first[1];
                            v2.push_back(s);

                        }
                    }
                }
                v1=v2;
                v2.clear();
            }
            if(n==1)
            {
                break;
            }
        }
        cout<<v1.size()<<endl;
    }
}

