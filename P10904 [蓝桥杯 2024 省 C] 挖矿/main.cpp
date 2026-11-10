#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+5,M=1e4+5;
int n,m,a[N];
map<int,int>sum;
signed main()
{
	cin>>n>>m;
	int mn=1e18,mx=-1e18;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==0)cnt++;
		// cout<<a[i]<<" ";
		sum[a[i]]++;
		mn=min(a[i],mn);
		mx=max(mx,a[i]);
	}
	// cout<<mn<<" "<<mx;
	for(int i=-m;i<=m;i++)
	{
		sum[i]+=sum[i-1];
	}
	int ans=0;
	for(int i=0;i<=m;i++)
	{
		int r=i;
		int l=-(m-i*2);
		if(l>0)l=0;
		ans=max(ans,sum[r]-sum[l-1]);
	}
	cout<<ans+cnt;
	return 0;
}