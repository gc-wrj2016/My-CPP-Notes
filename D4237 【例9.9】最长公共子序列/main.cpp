#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e3+5;
int n,m;
string a,b;
int dp[N][N];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>a>>b;
	n=a.size(),m=b.size();
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				dp[i+1][j+1]=max({dp[i][j]+1,dp[i][j+1],dp[i+1][j]});
			}
			else 
			{
				dp[i+1][j+1]=max({dp[i][j+1],dp[i+1][j]});
			}
			ans=max(ans,dp[i][j]);
		}
		
	}
	cout<<ans;
	return 0;
}

