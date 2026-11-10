#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e3+5;
int n;
int vis[N][N];
int a[N][N];
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
			if(x>1002||y>1002||x<1||y<1)continue;
			if(a[x][y]==1)continue;
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
	cin>>ex>>ey>>n;
	ex+=501,ey+=501;
	sx+=501,sy+=501;
	for(int i=1;i<=n;i++)
	{
		int x,y;
		cin>>x>>y;
		x+=501,y+=501;
		a[x][y]=1;
	}
	cout<<bfs();
	return 0;
}
