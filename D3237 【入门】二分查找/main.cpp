#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e6+5;
int n,m;
int a[N];
int ef(int x)
{
	int l=0,r=n+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(a[mid]<x)l=mid;
		else if(a[mid]>x)r=mid;
		else return mid;
	}
	return -1;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	a[0]=-1e18,a[n+1]=1e18;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	cout<<ef(x);
	return 0;
}

