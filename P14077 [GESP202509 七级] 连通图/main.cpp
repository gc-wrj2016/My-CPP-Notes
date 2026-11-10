#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
bool vis[100005];
vector<int>e[100005];
int cnt=0;
void dfs(int u)
{
	if(vis[u]==1)return ;
	vis[u]=1;
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
	
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			dfs(i);
			cnt++;
		}
	}
	cout<<cnt-1;
	return 0;
}

