#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
struct st
{
	char l,r;
};
st t[1005];
void dfsq(int u)
{
	cout<<char(u);
	if(t[u].l!='*')dfsq(t[u].l);
	if(t[u].r!='*')dfsq(t[u].r);
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	int g;
	for(int i=1;i<=n;i++)
	{
		char a,b,c;
		cin>>a>>b>>c;
		if(i==1)g=a;
		t[a]={b,c};
		/*
		   <>
		  /|\
		  />
		*/
	} 
	/*
	   ()
	  /|\
	  />
	*/
	dfsq(g);
	return 0;
}

