#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=3e1+5;
int n,m;
int dp[N][N];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	dp[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i%2==0&&j%2==0)
			{
				continue; 
			}
			dp[i][j]+=dp[i-1][j]+dp[i][j-1];
		}
	}
	cout<<dp[n][m];
	return 0;
}

