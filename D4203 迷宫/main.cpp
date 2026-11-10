#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e2+5;
int n;
int sx,sy,ex,ey;
char a[N][N];
int vis[N][N];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
struct st
{
	int x,y;
};
queue<st>q;
int bfs()
{
	while(q.size())q.pop();
	q.push({sx,sy});
	if(a[sx][sy]=='#')
	{
		return 0;
	}
	while(q.size())
	{
		st t=q.front();
		q.pop();
		if(t.x==ex&&t.y==ey)return 1;
		for(int i=0;i<=3;i++)
		{
			int x=t.x+dx[i],y=t.y+dy[i];
			if(x>n||y>n)continue;
			if(x<1||y<1)continue;
			if(vis[x][y]==1)continue;
			if(a[x][y]=='#')continue;
			q.push({x,y});
			vis[x][y]=1; 
		}
	}
	return 0;
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
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
				vis[i][j]=0;
			}
		}
		cin>>sx>>sy>>ex>>ey;
		sx++,sy++,ex++,ey++;
		if(bfs())cout<<"YES\n"; 
		else cout<<"NO\n";
	} 
	return 0;
}

