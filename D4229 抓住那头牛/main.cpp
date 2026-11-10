#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e5+5;
int n,k;
int a[N];

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		a[i]=n-i;
	}
	for(int i=n+1;i<=k;i++)
	{
		if(i%2==0)
		{
			a[i]=min(a[i/2],a[i-1])+1;
		}
		else a[i]=min(a[(i+1)/2]+1,a[i-1])+1;
	}
	cout<<a[k];
	return 0;
}

