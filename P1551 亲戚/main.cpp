#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m,p;
vector<int>e[5005];
int ans,cnt;
int vis[5005];
bool ok=false;
void dfs(int u,int eu)
{
	if(vis[u]==1)return ;
	vis[u]=1;
	if(u==eu)
	{
		ok=true;
		return ;
	}	
	for(auto i:e[u])
	{
		dfs(i,eu);
	}
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m>>p;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u); 
	}
	for(int i=1;i<=p;i++)
	{
		int su,eu;
		cin>>su>>eu;
		dfs(su,eu);
		if(ok)
		{
			cout<<"Yes\n";
		}
		else cout<<"No\n";
		ok=false;
		memset(vis,0,sizeof(vis)); 
	}
	return 0;
}

