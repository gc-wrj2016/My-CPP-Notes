#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5;
ll a[N],b[N];
ll dp[N];
signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        int nb=b[i];
        dp[i]=a[i];
        for(int j=i-1;j>=1;j--)
        {
            if(i>=j+b[j])
            {
                dp[i]=max(dp[i],dp[j]+a[i]);
            }
            else break;
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}