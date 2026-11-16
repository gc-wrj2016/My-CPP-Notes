#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N=2e5+5;
ll h[N];
int n;
ll a[N];
bool check(ll x)
{
    memcpy(a,h,sizeof(ll)*(n+1));
    for(int i=n;i>=3;i--)
    {
        if(a[i]<x)
        {
            return false;
        }
        ll d=min((a[i]-x)/3,h[i]/3);
        a[i]-=3*d;
        a[i-1]+=d;
        a[i-2]+=2*d;
    }
    return a[1]>=x&&a[2]>=x;
}
inline void run()
{
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
        sum+=h[i];
    }
    ll l=0,r=sum+1;
    while(l+1<r)
    {
        ll mid=(l+r)>>1;
        if(check(mid))l=mid;
        else r=mid;
    }
    cout<<l<<endl;
}
signed main()
{
    int T;
    cin>>T;
    while(T--)run();
}