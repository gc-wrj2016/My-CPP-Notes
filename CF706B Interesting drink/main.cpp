#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e5+5;
int n,q;
int a[N];

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cin>>q;
	a[0]=-1e18;
	a[n+1]=1e18;
	for(int i=1;i<=q;i++)
	{
		int x;
		cin>>x;
		cout<<upper_bound(a,a+n+2,x)-a-1<<endl<<endl;
	}
	return 0;
}

