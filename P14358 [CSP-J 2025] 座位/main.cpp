#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
bool cmp(int a,int b)
{
	return a>b;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n*m;i++)
	{
		int x;
		cin>>x;
		a[i]=x;
	} 
	const int Z=a[1];
	sort(a+1,a+n*m+1,cmp);
	int c=1,r=1;
	int cnt=0; 
	for(int i=1;i<=n*m;i++)
	{
		++cnt;
		if(cnt>=n+2&&cnt<2*n-1)
		{
			c--;
		}
		else if(cnt>2*n-1)r++,cnt=1;
		else c++;
		if(a[i]==Z)
		{
			cout<<c<<" "<<r;
			return 0;
		} 
	} 
	return 0;
}

