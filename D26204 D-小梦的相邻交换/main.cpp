#include<bits/stdc++.h>
#define int unsigned long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
int n,m;

signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int j=1,o=0,flag=1; 
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x%2==0)
			{
				if(x>=o)o=x;
				else flag=0;
			}
			else 
			{
				if(x>=j)j=x;
				else flag=0;
			}
		}
		if(flag)cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

