#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
vector<int>e[100005];
int dfs(int u)
{
	int cnt=0;
	for(auto i:e[u])
	{
		for(auto j:e[i])
		{
			cnt++;
		}
	}
	return cnt;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n; 
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		for(int j=1;j<=m;j++)
		{
			int v;
			cin>>v;
			e[i].push_back(v);
		}
	}
	int maxx=0,maxans=0;
	for(int i=1;i<=n;i++)
	{
		int tmp=dfs(i);
		if(tmp>maxx)
		{
			maxx=tmp;
			maxans=i;
		}
	}
	cout<<maxans<<" "<<maxx;
	return 0;
}

