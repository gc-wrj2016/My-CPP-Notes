#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
map<string,double>mp;

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string name;
		cin>>name;
		double x;
		cin>>x;
		if(!mp.count(name))
		{
			mp[name]=x*0.75;
		}
		else mp[name]+=x;
	} 
	for(auto i:mp)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}

