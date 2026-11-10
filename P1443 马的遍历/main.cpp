#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=4e2+5;
int n,m;
int sx,sy;
int ans[N][N];
int vis[N][N];
int dx[]={1,1,-1,-1,2,2,-2,-2};
int dy[]={2,-2,2,-2,1,-1,1,-1};
struct st
{
	int x,y,cnt;
};
queue<st>q;
void bfs()
{
	memset(ans,-1,sizeof(ans));
	q.push({sx,sy,0});
	vis[sx][sy]=1;
	while(q.size())
	{
		st t=q.front();
		q.pop();
		ans[t.x][t.y]=t.cnt;
		for(int i=0;i<=7;i++)
		{
			int x=t.x+dx[i],y=t.y+dy[i];
			if(x<1||y<1||x>n||y>m)continue;
			if(vis[x][y]==1)continue;
			q.push({x,y,t.cnt+1});
			vis[x][y]=1;
		}
	}
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m>>sx>>sy;
	bfs();
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
}

