#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e4+5;
int a[N],vis[N],L[N],R[N],Max[N];
signed main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	for(int l=1,r=1;r<=n;r++)
	{
		while(l<r&&a[r]-a[l]>k)l++;
		L[r]=l;
	}
	for(int r=n,l=n;l>=1;l--)
	{
		while(r>l&&a[r]-a[l]>k)r--;
		R[l]=r;
	}
	for(int i=n;i>=1;i--)
	{
		Max[i]=max(Max[i+1],R[i+1]-i);
	}
	int ans=0;
	for(int i=1;i<n;i++)
	{
		ans=max(ans,i-L[i]+1+Max[i]);
	}
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<L[i]<<" "<<R[i]<<" "<<Max[i]<<endl;
	// }
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	cout<<ans;
	return 0;
}