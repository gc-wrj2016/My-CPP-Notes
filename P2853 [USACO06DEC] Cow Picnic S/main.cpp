#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m,k;
vector<int>e[1005];
int c[105];
int vis[1005]; 
int tmp[1005];
void dfs(int u)
{
	if(vis[u]==1)return ;
	vis[u]=1;
	tmp[u]++;
	for(auto i:e[u])
	{
		dfs(i);
	}
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>k>>n>>m;
	for(int i=1;i<=k;i++)
	{
		cin>>c[i];
	}
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		e[u].push_back(v);
	}
	for(int i=1;i<=k;i++)
	{
		dfs(c[i]);
		memset(vis,0,sizeof(vis));
	} 
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(tmp[i]==k)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

