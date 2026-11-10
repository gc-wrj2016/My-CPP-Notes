#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
void dfs(int n,char c1,char c2,char c3)
{
	if(n==0)
	{
		return ;
	}
	dfs(n-1,c1,c3,c2);
	printf("%c->%d->%c\n",c1,n,c2); 
	dfs(n-1,c3,c2,c1);
	return ;
} 
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n; 
//	n=19;
	char a,b,c;
//	a='a',b='b',c='c';
	cin>>a>>b>>c;
	dfs(n,a,b,c);
	return 0;
}

