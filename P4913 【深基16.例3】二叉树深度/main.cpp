#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
int step[1000005];
vector<int>t[1000005];
void dfs(int u)
{
	if(u==0)return ;
	for(auto i:t[u])
	{
		step[i]=step[u]+1;
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
		int l,r;
		cin>>l>>r;
		t[i].push_back(l);
		t[i].push_back(r);
	}
	step[1]=1;
	dfs(1); 
	int ans=0;
	
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,step[i]);
	}
	cout<<ans;
	return 0;
}

