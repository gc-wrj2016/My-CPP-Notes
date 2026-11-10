#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e3+5;
int n,k;
int a[N];
bool check(int x)
{
	int sum=0,cnt=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>x)
		{
			return false;
		}
		if(sum+a[i]<=x)
		{
			sum+=a[i];
		}
		else sum=a[i],cnt++;
	}
	return cnt<=k;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	int maxai=0,sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		maxai=max(maxai,a[i]);
	}
	cin>>k;
	int l=maxai-1,r=sum+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(check(mid))r=mid;
		else l=mid;
	}
	cout<<r;
	return 0;
}

