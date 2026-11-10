#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int m;
int a[N],c,n,y;
string s;
//set<int>ans;   dfs
//void dfs(int step,int y)
//{
//	if(step<0)
//	{
//		if(!ans.count(y))
//		{
//			ans.insert(y);
//		}
//		return ;
//	}
//	if(s[step]=='+')
//	{
//		if(y==c)
//		{
//			dfs(step-1,c);
//		}
//		dfs(step-1,max(y-1,0LL)); 
//	}
//	else
//	{
//		if(y*2<=c)dfs(step-1,y*2);
//		if(y*2<c)dfs(step-1,y*2+1);
//	}
//	return ;
//}
struct st
{
	int y,step;
};
int bfs()//bfs
{
	int ans=0;
	set<int>vis;
	queue<st>q;
	q.push({y,n-1});
	while(!q.empty())
	{
		auto f=q.front();
		q.pop();
		int y=f.y;
		int step=f.step;
		if(step==-1)
		{
			if(y<=c&&!vis.count(y))ans++,vis.insert(y);
//			cout<<y<<endl; 
			continue;
		}
		if(s[step]=='H')
		{
			if(y*2<=c)q.push({min(y*2,c),step-1});
			if(y*2<c)q.push({min(y*2+1,c),step-1});
		}
		else
		{
			if(y==c)
			{
				q.push({c,step-1});
			}
			q.push({max(y-1,0LL),step-1});
		}
	}
	return ans;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>c>>y;
	cin>>s;
	int _y=y;
	int miny=c;
	cout<<bfs() ;
//	int ans=1;
//	int cnt=0;
//	for(int i=n;i>=1;i--)
//	{
//		char ch=a[i-1];
//		if(ch=='H')ans*=2,miny/=2,cnt++,y/=2;
//		if(ch=='+')
//		{
//			if(y==c||c-y<=cnt)
//		{
//				ans*=2;
//			}
//			else
//			{
//				y--;
//				miny--;
//			}
//		}
//	}
//	if(miny>y)cout<<0;
//	else cout<<ans;
	return 0;
}

