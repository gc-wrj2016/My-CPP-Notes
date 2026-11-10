#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n;
struct st
{
	int l,r;
};
st t[1000005];
void dfsx(int u)
{
	if(u==0)return ;
	cout<<u<<" ";
	dfsx(t[u].l);
	dfsx(t[u].r);
	return ;
}
void dfsz(int u)
{
	if(u==0)return ;
	dfsz(t[u].l);
	cout<<u<<" ";
	dfsz(t[u].r);
	return ;
}
void dfsh(int u)
{
	if(u==0)return ;
	dfsh(t[u].l);
	dfsh(t[u].r);
	cout<<u<<" ";
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i].l>>t[i].r;
	}
	dfsx(1);
	cout<<endl;
	dfsz(1);
	cout<<endl;
	dfsh(1);
	return 0;
}

