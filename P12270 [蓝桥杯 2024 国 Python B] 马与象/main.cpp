#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=5e1+5;
int n;
int sx1,sy1,sx2,sy2;
int a[N];
int vis[N][N];
int dx[]={1,1,-1,-1,2,2,-2,-2};
int dy[]={2,-2,2,-2,1,-1,1,-1};
int dx2[]={2,-2,2,-2};
int dy2[]={2,2,-2,-2};
struct st
{
	int x,y,cnt;
};
queue<st>q; 
int bfs1(int sx,int sy,int ex,int ey)
{
	q.push({sx,sy,0});
	vis[sx][sy]=1;
	while(!q.empty())
	{
		st t=q.front();
		q.pop();
		if(t.x==ex&&t.y==ey)return t.cnt;
		for(int i=0;i<=7;i++)
		{
			int x=t.x+dx[i],y=t.y+dy[i];
			if(x<1||y<1||x>n||y>n)continue;
			if(vis[x][y]==1)continue;
			q.push({x,y,t.cnt+1});
			vis[x][y]=1; 
		}
	}
	return -1;
} 
int bfs2(int sx,int sy,int ex,int ey)
{
	q.push({sx,sy,0});
	vis[sx][sy]=1;
	while(!q.empty())
	{
		st t=q.front();
		q.pop();
		if(t.x==ex&&t.y==ey)return t.cnt;
		for(int i=0;i<=3;i++)
		{
			int x=t.x+dx2[i],y=t.y+dy2[i];
			if(x<1||y<1||x>n||y>n)
				continue;
			if(vis[x][y]==1)continue;
			q.push({x,y,t.cnt+1});
			vis[x][y]=1; 
		}
	}
	return -1;
} 
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;	
	cin>>sx1>>sy1>>sx2>>sy2;
	n++,sx1++,sy1++,sx2++,sy2++;
	int ans=1e18;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			memset(vis,0,sizeof(vis));
			while(!q.empty())q.pop();
			int tmp0=bfs1(i,j,sx1,sy1);
			memset(vis,0,sizeof(vis));
			while(!q.empty())q.pop();
			int tmp1=bfs2(i,j,sx2,sy2);
			if(tmp0!=-1&&tmp1!=-1)ans=min(ans,tmp0+tmp1);
		}
	}
	if(ans>=1e18)cout<<-1;
	else cout<<ans; 
	return 0;
}

