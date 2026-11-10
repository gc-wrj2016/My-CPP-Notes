#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e6+5;
int n,k,ans=-1e18;
int a[N],sum1[N],sum2[N];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum1[i]=sum1[i-1]+a[i];
	}
	for(int i=n;i>=1;i--)
	{
		sum2[i]=sum2[i+1]+a[i];
	}
	for(int x=0;x<=k;x++)
	{
		ans=max(ans,sum1[x]+sum2[n-k+x+1]);
	}
	cout<<ans;
	return 0;
}

