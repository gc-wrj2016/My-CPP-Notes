#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
struct st
{
	int z,w;
};
vector<st>e[25];
int ans=0; 
int vis[25];
void dfs(int u,int sum)
{
	ans=max(ans,sum);
	for(auto i:e[u])
	{
		if(vis[i.z]==0)
		{
			vis[i.z]=1;
			dfs(i.z,sum+i.w);
			vis[i.z]=0;
		}
	}
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=m;i++) 
	{
		int u,v,w;
		cin>>u>>v>>w;
		e[u].push_back({v,w});
		e[v].push_back({u,w});
	}
	for(int i=1;i<=n;i++)
	{
		vis[i]=1;
		dfs(i,0);
		vis[i]=0;
	}
	cout<<ans;
	return 0;
}

