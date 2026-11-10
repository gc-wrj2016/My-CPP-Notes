#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e1+5;
int ex,ey,hx,hy;
int dp[N][N];
int vis[N][N];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>ex>>ey>>hx>>hy;
	ex++,ey++,hx++,hy++;
	vis[hx][hy]=1;
	vis[hx+1][hy+2]=1;
	if(hy-2>0)vis[hx+1][hy-2]=1;
	vis[hx-1][hy+2]=1;
	if(hy-2>0)vis[hx-1][hy-2]=1;
	vis[hx+2][hy+1]=1;
	vis[hx+2][hy-1]=1;
	if(hx-2>0)vis[hx-2][hy+1]=1;
	if(hx-2>0)vis[hx-2][hy-1]=1;
	dp[1][1]=1;
	for(int i=1;i<=ex;i++)
	{
		for(int j=1;j<=ey;j++)
		{
			if(vis[i][j]==1)continue;
			dp[i][j]+=dp[i-1][j]+dp[i][j-1];
		}
	}
	cout<<dp[ex][ey];
	return 0;
}

