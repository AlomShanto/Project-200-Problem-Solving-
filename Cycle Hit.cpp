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
        vector<string>v,v1;
        v.push_back("H");
        v.push_back("2B");
        v.push_back("3B");
        v.push_back("HR");
        string s,s1,s2,s3;
        cin>>s>>s1>>s2>>s3;
        v1.push_back(s);
        v1.push_back(s1);
        v1.push_back(s2);
        v1.push_back(s3);
        srt(v);
        srt(v1);
        if(v==v1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

