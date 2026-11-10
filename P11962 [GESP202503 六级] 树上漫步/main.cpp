#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
vector<int>t[N];
int vis[N];
int jo[2],u_jo[N];
void dfs(int u,int step)
{
	if(vis[u])return ;
	vis[u]=1;
	if(step%2==0)
	{
		jo[0]++,u_jo[u]=0;
	}
	else jo[1]++,u_jo[u]=1;
	for(auto x:t[u])
	{
		dfs(x,step+1);
	}
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		t[u].push_back(v);
		t[v].push_back(u);
	}
	dfs(1,0);
	for(int i=1;i<=n;i++)
	{
		cout<<jo[u_jo[i]]<<" ";
	}
	return 0;
}

