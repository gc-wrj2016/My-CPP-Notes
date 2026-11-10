#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e6+5;
int n,m;
int a[N];
bool vis[N];
struct st
{
	int x,cnt;
};
queue<st>q;
int bfs()
{
	q.push({m,0});
	vis[m]=1;
	while(q.size())
	{
		st t=q.front();
		q.pop();
		if(t.x==n)
		{
			return t.cnt;
		}
		for(int i=1;i<=3;i++)
		{
			int x;
			if(i==1)x=t.x+1;
			if(i==2)x=t.x-1;
			if(i==3)x=t.x*2;
			if(x<1||x>200005)continue;
			if(vis[x]==1)continue;
			q.push({x,t.cnt+1});
			vis[x]=1; 
		}
	}
	return -1;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		cout<<bfs()<<endl;
		memset(vis,0,sizeof(vis));
		while(!q.empty())q.pop(); 
	} 
	return 0;
}

