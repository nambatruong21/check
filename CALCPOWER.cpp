#include <bits/stdc++.h>

using namespace std;
long long n,p1,p2,p3,t1,t2;
long long ans=0;
long long l,r;
struct
{
    long long x,y;
}a[20005];
long long k(long long o)
{
    long long rt=0;
    if(o>=t1)
    {
        rt=p1*t1;
        if(t2+t1>o)
        {
            rt+=p2*o;
            return rt;
        }
        else if(t2+t1<=o)
        {
            rt+=p2*t2;
            rt+=(o-(t1+t2))*p3;
            return rt;
        }
    }
    else return p1*o;
}
void solve()
{
    for(int i=2;i<=n;i++)
    {
        long long o=a[i].x-a[i-1].y;
        ans+=k(o);
    }
    cout<<ans;
}
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("CALCPOWER.INP","r",stdin);
    freopen("CALCPOWER.OUT","w",stdout);
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r;
        a[i].x=l;a[i].y=r;
        ans+=(p1*(r-l));
    }
    if(n==1) cout<<ans;
    else solve();
    return 0;
}
