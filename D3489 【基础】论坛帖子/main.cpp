#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
vector<int>v[100005];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string q;
		cin>>q;
		if(q=="ADD")
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
		}
		else
		{
			int x,y;
			cin>>x>>y;
			if(v[x].size()<y)
			{
				cout<<"-1\n";
			}
			else
			{
				cout<<v[x][y-1]<<endl;
			}
		}
	}
	return 0;
}

