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
	int t;
	cin>>t;
	while(t--)
	{
		int len;
		cin>>len;
		string s;
		cin>>s;
		int ans=0;
		for(int k=1;k<=s.size();k++)
		{
			int tmp1=0,tmp0=0;
			string q=s.substr(0,k);
			for(int i=0;i<q.size();i++)
			{
				if(q[i]=='1')
				{
					tmp1++;
				}
				else tmp0++;
			}
			ans+=abs(tmp1-tmp0);
		}
		cout<<ans<<endl;
	}
	return 0;
}

