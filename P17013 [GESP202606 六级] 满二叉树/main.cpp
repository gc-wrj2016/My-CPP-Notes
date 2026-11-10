#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
struct st
{
	int l,r;
}a[N];
int h[N];
int vis[N];
void dfs(int u)
{
	if(u==0)return ;
	dfs(a[u].l);
	dfs(a[u].r);
	int ls=a[u].l;
	int rs=a[u].r;
	if(h[ls]==h[rs]&&vis[ls]&&vis[rs])
	{
		vis[u]=1;
	} 
	h[u]=max(h[ls],h[rs]);
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
		cin>>a[i].l>>a[i].r; 
	}
	vis[0]=1; 
	dfs(1);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=vis[i];
	}
	cout<<ans;
	return 0;
}

