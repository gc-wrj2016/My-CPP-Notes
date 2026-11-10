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
	string x;
	char c;
	int k;
	cin>>x>>c>>k;
	for(int i=0;i<x.size();i++)
	{
		a[i+1]=a[i]; 
		if(x[i]==c)
		{
			a[i+1]++;
		}
	}
	int ans=0;
	for(int i=0;i<=x.size()-k;i++)
	{
		ans=max(ans,a[i+k]-a[i]); 
	}
	cout<<ans; 
	return 0;
}

