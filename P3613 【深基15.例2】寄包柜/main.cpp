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
	cin>>n>>m;
	while(m--)
	{
		int x;
		cin>>x;
		if(x==1)
		{
			int i,j,k;
			cin>>i>>j>>k;
			while(v[i].size()<j+1)
			{
				v[i].push_back(0);
			}
			v[i][j]=k;
		} 
		else
		{
			int i,j;
			cin>>i>>j;
			cout<<v[i][j]<<endl;
		}
	}
	return 0;
}

