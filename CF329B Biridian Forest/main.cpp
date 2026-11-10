#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e3+5;
int n,m;
int sx,sy,ex,ey;
char a[N][N];
int vis[N][N];
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
struct st
{
	int x,y,cnt;
};
int ansh=0;
int tmp=0;
queue<st>q;
queue<pair<int,int>>ans;
void bfs()
{
	q.push({ex,ey,0});
	vis[ex][ey]=1;
	while(q.size())
	{
		st t=q.front();
		q.pop();
		if(a[t.x][t.y]=='S')
		{
			tmp=t.cnt;
		}
		if(a[t.x][t.y]>'0'&&a[t.x][t.y]<='9')ans.push({t.cnt,a[t.x][t.y]-'0'});
		for(int i=0;i<=3;i++)
		{
			int x=t.x+dx[i],y=t.y+dy[i];
			if(x<1||y<1||x>n||y>m)continue;
			if(vis[x][y]==1)continue;
            if(a[x][y]=='T')continue;
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
	cin>>n>>m; 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='S')
			{
				sx=i,sy=j;
			}
			if(a[i][j]=='E')
			{
				ex=i,ey=j;
			}
		}
	}
	bfs();
	while(!ans.empty())
	{
		pair<int,int> t=ans.front();
		if(t.first<=tmp)ansh+=t.second;
		ans.pop();
	}
	cout<<ansh;
	return 0;
}

