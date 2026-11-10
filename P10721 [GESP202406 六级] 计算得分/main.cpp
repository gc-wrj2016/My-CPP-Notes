#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e1+5;
int n,m;
int a[N];
int f[100005]; 
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; 
	}
	cin>>m;
	string x;
	cin>>x;
	for(int i=2;i<m;i++)
	{
		f[i]=f[i-1];
		if(x[i]=='c'&&x[i-1]=='b'&&x[i-2]=='a')
		{
			for(int j=0;;j++)
			{
				if(i-j*3-2<0)break;
				if(x[i-j*3]=='c'&&x[i-j*3-1]=='b'&&x[i-j*3-2]=='a')
				{
					f[i]=max(f[i],f[i-j*3]+a[j+1]);
				}
				else break;
			}
		}
	}
	cout<<f[m-1];
	return 0;
}

