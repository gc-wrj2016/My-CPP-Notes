#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
map<int,int>mp;
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int name;
		cin>>name;
		mp[name]++;
	} 
	for(auto i:mp)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}

