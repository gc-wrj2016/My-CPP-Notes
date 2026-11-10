#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e4+5;
int n,m;
int a[N];
struct st
{
	int g,h;
}dp[N];
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
	for(int i=1;i<=n;i++)
	{
		dp[i]={1,a[i]};
		for(int j=1;j<i;j++)
			if(a[i]>=a[j])
				if(dp[i].g<dp[j].g+1)
					dp[i]={dp[j].g+1,dp[j].h+a[i]};
		cout<<dp[i].h<<" ";
	}
	return 0;
}

