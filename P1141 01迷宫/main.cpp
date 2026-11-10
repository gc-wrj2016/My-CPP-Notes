#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e3+5;
int n,m;
string a[N];
int vis[N][N],ans;
struct st
{
	int x,y,cnt,fx,fy;
};
queue<st>q;
int dx[]={1,-1,0,1,-1,0};
int dy[]={1,1,0,0,-1,-1}; 
void bfs(int sx,int sy)
{
	q.push({sx,sy,1,0,0});
	while(q.size())
	{
		auto qf=q.front();
		q.pop();
		ans=max(ans,qf.cnt);
		for(int i=0;i<4;i++)
		{
			int x=qf.x+dx[i];
			int y=qf.y+dy[i];
			if(x<=0||x>n||y<=0||y>n)
			{
				continue;
			}
			if(x==qf.fx||y==qf.fy)
			{
				continue;
			}
			q.push({x,y,qf.cnt+1,qf.x,qf.y});
		}
	}
	return ; 
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i]=" "; 
		cin>>a[i];
	}
	for(int i=1;i<=m;i++) 
	{
		int x,y;
		cin>>x>>y;
		ans=0;
		memset(vis,0,sizeof vis);
		bfs(x,y);
		cout<<ans<<endl;
	} 
	return 0;
}

