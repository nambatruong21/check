#include <bits/stdc++.h>

using namespace std;
long long n;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("JUMPING.INP","r",stdin);
    freopen("JUMPING.OUT","w",stdout);
    cin>>n;
    n=abs(n);
    long long cnt=0,s=0,ans=0;
    while(s<n||abs(s-n)%2==1)
    {
        cnt++;
        ans++;
        s=cnt*(cnt+1)/2;
    }
    cout<<ans;
    return 0;
}
