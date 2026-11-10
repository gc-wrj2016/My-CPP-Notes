#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e5+5;
int n,m;
int p[N],dp[N];

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	int ans=-1e18;
	dp[0]=-1e18;
	for(int i=1;i<=n;i++)
	{
		dp[i]=max(p[i],dp[i-1]+p[i]);
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	return 0;
}

