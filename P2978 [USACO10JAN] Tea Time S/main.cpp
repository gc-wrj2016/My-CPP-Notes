#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m,q;
int a[N];
int vis[1005];
vector<int>e[1005];
int ans=0;
void dfs(int eu,int u)
{
	if(vis[u]==1)return ;
	vis[u]=1;
	if(u==eu)
	{
		ans=1;
		return ;
	}
	for(auto i:e[u])
	{
		dfs(eu,i);
	}
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m>>q;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	for(int i=1;i<=q;i++)
	{
		int x,y;
		cin>>x>>y;
		dfs(y,x);
		if(ans==0)
		{
			cout<<"N\n";
		}
		else cout<<"Y\n";
		ans=0;
		memset(vis,0,sizeof vis);
	}
	return 0;
}

