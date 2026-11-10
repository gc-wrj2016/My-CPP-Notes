#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=5e5+5;
int n,m;
vector<int>e[N];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			e[u].push_back(v);
		}
		for(int i=1;i<=n;i++)
		{
			sort(e[i].begin(),e[i].end());
		}
		for(int i=1;i<=n;i++)
		{
			for(auto j:e[i])
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
		for(int i=1;i<=n;i++)
		{
			e[i].clear();
		} 
	}
	return 0;
}

