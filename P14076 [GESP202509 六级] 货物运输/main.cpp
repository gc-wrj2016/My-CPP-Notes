#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m;
int vis[200005];
struct st
{
	int z,w,id;
};
int ans=0;
vector<st>e[100005];
void dfs(int fa,int u,int sum)
{
	for(auto i:e[u])
	{
		if(i.z!=fa)dfs(u,i.z,sum+i.w);
	}
	ans=max(ans,sum);
	return ;
} 
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	int tmp=0;
	for(int i=1;i<n;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		tmp+=w;
		e[u].push_back({v,w});
		e[v].push_back({u,w});
	}
	tmp*=2;
	dfs(0,1,0);
	cout<<tmp-ans;
	return 0;
}

