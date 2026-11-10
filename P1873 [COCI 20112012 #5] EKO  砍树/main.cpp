#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e6+5;
int n,m;
int a[N];
bool check(int x)
{//ÇÐ¸îµôµÄÄ¾²ÄÊÇ·ñ>=m 
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>x)
		{
			ans+=a[i]-x;
		}
	}
	return ans>=m;
}
signed main()
{
	cin>>n>>m;
	int maxai=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxai=max(maxai,a[i]);
	}
	int l=0,r=maxai+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(check(mid))
		{
			l=mid;
		}
		else r=mid;
	}
	cout<<l;
	return 0;
}
