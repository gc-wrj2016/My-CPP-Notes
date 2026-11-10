#include<bits/stdc++.h>
using namespace std;
const int N=105,M=1e3+5;
int w[N],c[N],dp[M];
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>c[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=w[i];j--)
        {
            dp[j]=max(dp[j],dp[j-w[i]]+c[i]);
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}