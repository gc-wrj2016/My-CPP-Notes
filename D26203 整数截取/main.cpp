#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,m;
int a[N];
int cmp(char a,char b)
{
	return a>b;
}
signed main()
{
	int k;
	string x,_x;
	cin>>x;
	_x=x;
	cin>>k;
	string maxx;
	for(int i=1;i<=k;i++)maxx+='0';
	sort(_x.begin(),_x.end(),cmp);
	if(k==1)
	{
		cout<<_x[0];
		return 0;
	}	
	for(int i=0;i<x.size()-k+1;i++)
	{
		maxx=max(maxx,x.substr(i,k));
	}
	cout<<maxx;
	return 0;
}

