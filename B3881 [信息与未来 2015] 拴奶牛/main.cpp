#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e6+5;
int n,k;
int a[N];
bool check(int x)
{
	int tmp=a[1],cnt=1;
	for(int i=2;i<=k;i++)
	{
		if(a[i]-tmp>=x)
		{
			cnt++,tmp=a[i];
		}
	}
	return cnt>=n;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int p1;
	cin>>n>>k>>p1;
	a[1]=p1;
	for(int i=2;i<=k;i++)
	{
		a[i]=a[i-1]+(a[i-1]*2357+137)%10+1;
	}
	int l=0,r=k+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(check(mid))l=mid;
		else r=mid;
	}
	cout<<l;
	return 0;
}

