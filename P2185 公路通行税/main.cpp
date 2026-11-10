#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
struct st
{
	int z,cnt;
};
vector<int>e[1005];
queue<st>q;
int vis[1005];
int ans=0;
void bfs(int su)
{
	q.push({su,0});	
	while(!q.empty())
	{
		st t=q.front();
		ans=max(ans,t.cnt);
		q.pop();
		for(auto i:e[t.z])
		{
			if(vis[i]==0)
			{
				q.push({i,t.cnt+1});
				vis[i]=1;
			}
		}
	}
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(cin>>n>>m)
	{
		
		if(n==0&&m==0)break;
		while(m--) 
		{
			int u,v;
			cin>>u>>v;
			e[u].push_back(v);
			e[v].push_back(u);
		}
		for(int i=1;i<=n;i++)
		{
			bfs(i);
			memset(vis,0,sizeof vis);
			while(!q.empty())q.pop();
		}
		cout<<ans*100<<endl;
		ans=0;
		memset(vis,0,sizeof vis);
		while(!q.empty())q.pop();
	}
	
	return 0;
}

