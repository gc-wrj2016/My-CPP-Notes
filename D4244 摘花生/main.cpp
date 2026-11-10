#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e3+5;
int n,m;
int a[N][N],dp[N][N];

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>a[i][j]; 
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j])+a[i][j];
			}
		}
		cout<<dp[n][m]<<endl;
	} 
	return 0;
}

