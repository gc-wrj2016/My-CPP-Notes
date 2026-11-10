#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e2+5;
int n,m;
int a[N][N],dp[N][N];

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	memset(dp,-0x3f,sizeof dp);
	dp[n+1][m/2+1]=0;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=max({dp[i+1][j],dp[i+1][j-1],dp[i+1][j+1]})+a[i][j];
		}
	}
	int ans=-1e18;
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,dp[1][i]);
	}
	cout<<ans;
	return 0;
}
