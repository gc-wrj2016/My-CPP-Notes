#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int ans=0;
	char x;
	while(cin>>x)
	{
		if(x=='1')ans++;
	}
	cout<<ans; 
	return 0;
}

