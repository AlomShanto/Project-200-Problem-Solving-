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
        ll W,H;
        cin>>W>>H;
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ll w,h;
        cin>>w>>h;

        ll w1=(x2-x1);
        ll h1=(y2-y1);
        double ans=0.0;
        if((w1+w)<=W || (h1+h)<=H)
        {
            if((w1+w)<=W && (h1+h)<=H)
            {
                ll c1=x1;
                ll d1=y1;
                ll c2=W-x2;
                ll d2=(H-y2);
                if( (w<=c1 || h<=d1) || (w<=c2 || h<=d2))
                {
                    printf("%.10lf\n",ans);
                    //cout<<"XX"<<endl;
                }
                else
                {
                    ll d3=min(w-c1,w-c2);
                    ll d4=min(h-d1,h-d2);
                    d3=min(d3,d4);
                    ans=(double)d3;
                    //cout<<d1<<" "<<ans<<endl;
                    printf("%.10lf\n",ans);
                }
            }
            else if((w1+w)<=W)
            {
                ll c1=x1;
                ll c2=W-x2;
                if((w<=c1) || (w<=c2))
                {
                    //cout<<"XX"<<endl;
                    printf("%.10lf\n",ans);
                }
                else
                {
                    //cout<<((w-x1))<<"    "<<((w)-(W-x2))<<endl;
                    c1=min((w-c1),(w-c2));
                    ans=(double)c1;
                    //cout<<"XX"<<endl;
                    printf("%.10lf\n",ans);
                }
            }
            else
            {
                ll d1=y1;
                ll d2=(H-y2);
                if( (h<=d1) || (h<=d2))
                {
                    //cout<<"XX"<<endl;
                    printf("%.10lf\n",ans);
                }
                else
                {
                    d2=min(h-d1,h-d2);
                    ans=(double)d2;
                    printf("%.10lf\n",ans);
                }
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
