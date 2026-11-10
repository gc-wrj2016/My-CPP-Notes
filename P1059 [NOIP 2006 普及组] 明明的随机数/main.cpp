#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
set<int>s;

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(!s.count(x))
		{
			s.insert(x);
		}
	} 
	cout<<s.size()<<endl;
	for(auto i:s)
	{
		cout<<i<<" ";
	}
	return 0;
}

