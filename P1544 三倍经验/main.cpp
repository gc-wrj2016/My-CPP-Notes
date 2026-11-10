#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e2+5;
int n,m;
int a[N][N];
int dp[N][N][N],K;
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>K;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>a[i][j];
		}
	}
	memset(dp,-0x3f,sizeof dp);
	dp[1][1][0]=a[1][1];
	dp[1][1][1]=a[1][1]*3;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			for(int k=0;k<=K&&k<=i;k++)
			{
				if(k>0)
				{
					dp[i][j][k]=max(dp[i-1][j][k-1]+a[i][j]*3,dp[i-1][j-1][k-1]+a[i][j]*3);
				}
				dp[i][j][k]=max({dp[i][j][k],dp[i-1][j][k]+a[i][j],dp[i-1][j-1][k]+a[i][j]});
			}
		}
	}
	int ans=-1e18;
	for(int i=1;i<=n;i++)
	{
		for(int k=0;k<=K;k++)
		{
			ans=max(ans,dp[n][i][k]);
		}
	}
	cout<<ans;
	return 0;
}

