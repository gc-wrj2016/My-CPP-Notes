#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m,s;
struct st
{
	int z,w;
};
vector<st>e[25];
int step[25];
int vis[25];
void dfs(int u,int sum)
{
	if(step[u]>sum)
	{
		step[u]=sum;
	}
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
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		e[u].push_back({v,w});
	}
	vis[s]=1;
	memset(step,0x3f,sizeof step); 
	dfs(s,0);
	for(int i=1;i<=n;i++)
	{
		cout<<step[i]<<" ";
		
	}
	return 0;
}

