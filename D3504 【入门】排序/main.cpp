#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
vector<int>v[1005];
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
			int x;
			cin>>x;
			v[i].push_back(x);
		}
	}
	for(int i=1;i<=n;i++)
	{
		sort(v[i].begin(),v[i].end());
	}
	sort(v+1,v+n+1);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			printf("%d ",v[i][j]);
		}
		printf("\n");
	}
	return 0;
}

