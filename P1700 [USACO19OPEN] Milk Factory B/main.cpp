#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int vis[105];
vector<int>e[105];
int cnt=0;
void dfs(int u)
{
	if(vis[u]==1)return ;
	vis[u]=1;
	cnt++;
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
	cin>>n;
	m=n-1;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		e[v].push_back(u); 
	} 
	for(int i=1;i<=n;i++)
	{
		dfs(i);
		if(cnt==n)
		{
			cout<<i;
			return 0;
		}
		cnt=0;
		memset(vis,0,sizeof(vis));
	}
	cout<<-1;
	return 0;
}

