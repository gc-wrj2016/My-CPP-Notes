#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
vector<int>e[200005];
int ans=0;
int vis[200005];
void dfs(int u)
{
	if(ans>=1000000)
	{
		cout<<1000000;
		exit(0);
	}
	ans++;
	for(auto i:e[u])
	{
		if(vis[i]==0)
		{
			vis[i]=1;
			dfs(i);
			vis[i]=0;
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
		int u,v;
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u); 
	}
	vis[1]=1;
	dfs(1); 
	cout<<ans;
	return 0;
}

