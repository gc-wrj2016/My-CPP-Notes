#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
int n,m;
int a[N],b[N];

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int cnt=0,cnt2=0;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x%2==0)
			{
				b[++cnt2]=x;
			}
			else a[++cnt]=x;
		}
		if(!(cnt<=k&&cnt2<=k))
		{
			cout<<"No\n";
			continue;
		}
		int flag=1;
		for(int i=1;i<cnt;i++)
		{
			if(a[i]>a[i+1])
			{
				flag=0;
				cout<<"No\n";
				break;
			}
		}
		if(flag)
		{
			for(int i=1;i<cnt2;i++)
			{
				if(b[i]>b[i+1])
				{
					flag=0;
					cout<<"No\n";
					break;
				}
			}
		}
		if(flag)cout<<"Yes\n";
		for(int i=1;i<=cnt;i++)
		{
			a[i]=0; 
		}
		for(int i=1;i<=cnt2;i++)
		{
			b[i]=0;
		}
	}
	return 0;
}

