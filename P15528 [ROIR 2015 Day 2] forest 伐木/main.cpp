#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int a,k,b,m,x;
int check(int t)
{
	int tmp1=(t-t/k)*a;
	int tmp2=(t-t/m)*b;
	return (tmp1+tmp2)>=x;
}
signed main()
{
	cin>>a>>k>>b>>m>>x;
	int l=0,r=1e18/(a+b)*2+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(check(mid))r=mid;
		else l=mid;
	}
	cout<<r;
	return 0;
}

