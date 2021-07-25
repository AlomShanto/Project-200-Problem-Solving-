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
        ll n;
        cin>>n;
        priority_queue< ll >pq1,pq2,pq3,pq4,pq5;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            ll a=0,b=0,c=0,d=0,e=0;
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]=='a')
                {
                    a++;
                }
                else if(s[j]=='b')
                {
                    b++;
                }
                else if(s[j]=='c')
                {
                    c++;
                }
                else if(s[j]=='e')
                {
                    e++;
                }
                else if(s[j]=='d')
                {
                    d++;
                }
            }
            pq1.push(a-(b+c+d+e));
            pq2.push(b-(a+c+d+e));
            pq3.push(c-(b+a+d+e));
            pq4.push(d-(b+c+a+e));
            pq5.push(e-(b+c+d+a));
        }
        ll ans1=0,ans2=0,ans3=0,ans4=0,ans5=0;
        ll d1=0,d2=0,d3=0,d4=0,d5=0;
        while(pq1.size()>0)
        {
            d1+=pq1.top();
            if(d1<=0)
            {
                break;
            }
            else
            {
                ans1++;
                pq1.pop();
            }
        }

        while(pq2.size()>0)
        {
            d2+=pq2.top();
            if(d2<=0)
            {
                break;
            }
            else
            {
                ans2++;
                pq2.pop();
            }
        }

        while(pq3.size()>0)
        {
            d3+=pq3.top();
            if(d3<=0)
            {
                break;
            }
            else
            {
                ans3++;
                pq3.pop();
            }
        }

        while(pq4.size()>0)
        {
            d4+=pq4.top();
            if(d4<=0)
            {
                break;
            }
            else
            {
                ans4++;
                pq4.pop();
            }
        }

        while(pq5.size()>0)
        {
            d5+=pq5.top();
            if(d5<=0)
            {
                break;
            }
            else
            {
                ans5++;
                pq5.pop();
            }
        }

        ll ans=max(ans1,max(ans2,max(ans3,max(ans4,ans5))));
        cout<<ans<<endl;
    }
}
