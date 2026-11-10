#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e4+5;
int n,m;
int a[N],dp[N];

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		dp[i]=1;
		for(int j=1;j<i;j++)
		{
			if(a[i]>=a[j])dp[i]=max(dp[i],dp[j]+1);
		}
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	return 0;
}

