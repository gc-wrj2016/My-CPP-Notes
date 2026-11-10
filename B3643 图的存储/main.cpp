#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m;
int me[1003][1003];
vector<int>te[1003];
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
		me[u][v]=1;
		me[v][u]=1;
		te[u].push_back(v);
		te[v].push_back(u);
	}  
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<me[i][j]<<' ';
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<te[i].size()<<" ";
		sort(te[i].begin(),te[i].end());
		for(auto j:te[i])
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

