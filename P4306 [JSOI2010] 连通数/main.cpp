#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n;
vector<int>e[2005];
int ans,cnt;
int vis[2005];
void dfs(int u)
{
	if(vis[u]==1)return ;
	vis[u]=1;
	ans++; 
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
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			char a;
			cin>>a;
			if(a=='1')
			{
				e[i].push_back(j);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i);
		memset(vis,0,sizeof(vis)); 
	}
	cout<<ans;
	return 0;
}

