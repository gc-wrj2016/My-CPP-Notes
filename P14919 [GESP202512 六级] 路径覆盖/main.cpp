#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
vector<int>t[N];
int c[N]; 
int dp[N];
void dfs(int u)
{
	if(t[u].size()==0)
	{
		dp[u]=c[u];
		return ;
	}
	int sum=0;
	for(auto i:t[u])
	{
		dfs(i);
		sum+=dp[i]; 
	}
	dp[u]=max(c[u],sum);
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)t[i].clear();
	for(int i=2;i<=n;i++)
	{
		int x;
		cin>>x;
		t[x].push_back(i);
	}
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	dfs(1);
	cout<<dp[1]<<endl;
	return 0;
}

