#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e2+5;
int n,m;
int vis[N][N];
char a[N][N];
int sx,sy,ex,ey;
struct st
{
	int x,y,cnt;
};
queue<st>q;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int bfs()
{
	q.push({sx,sy,0});
	while(q.size())
	{
		st t=q.front();
		if(t.x==ex&&t.y==ey)return t.cnt;
		q.pop();
		for(int i=0;i<=3;i++)
		{
			int x=t.x+dx[i],y=t.y+dy[i];
			if(x>10||y>10||x<1||y<1)continue;
			if(a[x][y]=='R')continue;
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
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='L')sx=i,sy=j;
			if(a[i][j]=='B')ex=i,ey=j; 
		}
	}
	cout<<bfs()-1;
	return 0;
}
