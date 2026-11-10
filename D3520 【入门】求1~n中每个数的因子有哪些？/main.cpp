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
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<':';
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cout<<j<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

