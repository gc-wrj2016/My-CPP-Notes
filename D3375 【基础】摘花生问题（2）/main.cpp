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
	string s;
	int x=n,y=m;
	for(int i=1;i<=n+m-1;i++)
	{
		s='-'+to_string(a[x][y])+s;
		if(dp[x-1][y]>dp[x][y-1])
		{
			x=x-1;
			y=y;
		}
		else x=x,y=y-1;
	}
	cout<<s.substr(1,s.size()-1); 
	return 0;
}

