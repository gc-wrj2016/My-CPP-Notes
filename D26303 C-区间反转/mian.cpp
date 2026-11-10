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
	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	int tmps=-1,tmpe=-1;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=t[i])
		{
			tmps=i;
			break;
		}
	} 
	for(int i=n-1;i>=0;i--)
	{
//		cout<<i<<" "<<s[i]<<" "<<t[i]<<endl;
		if(s[i]!=t[i])
		{
			tmpe=i;
//			cout<<tmpe<<endl;
			break;
		}
	}
//	cout<<tmpe<<" "<<tmps;
	if(tmps==-1&&tmpe==-1)
	{
		cout<<1;
	}
	else if(tmps==-1||tmpe==-1)
	{
		cout<<-1;
	}
	else
	{
		for(int i=tmpe,j=tmps;i>=tmps&&j<=tmpe;i--,j++)
		{
			if(s[i]!=t[j])
			{
				cout<<-1;
				return 0;
			}
		}
		cout<<tmpe-tmps+1; 
	} 
	return 0;
}

