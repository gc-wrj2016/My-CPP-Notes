#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int cnt[N];
vector<int>t[N];
void dfs(int u,int sum)
{
	sum+=cnt[u];
	sum%=2;
	cnt[u]=sum;
	for(auto x:t[u])
	{
		dfs(x,sum);
	}
	return ;
} 
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int y;
		cin>>y;
		t[y].push_back(i+1); 
	}
	string x;
	cin>>x;
	int q;
	cin>>q;
	while(q--)
	{
		int p;
		cin>>p;
		cnt[p]++;
	}
	dfs(1,0);
	for(int i=1;i<=n;i++)
	{
		if(cnt[i]%2==1)
		{
			if(x[i-1]=='0')cout<<1;
			else cout<<0 ;
		}
		else
		{
			cout<<x[i-1];
		}
	}
	return 0;
}

