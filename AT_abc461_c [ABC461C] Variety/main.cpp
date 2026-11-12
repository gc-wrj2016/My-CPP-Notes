#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int n,a[N],ans;
void f1(int step,int rest)
{
	if(step>10)
	{
		if(rest==0)
		{
			ans++;
		} 
		return ;
	}
	if(rest==0)
	{
		return ; 
	}
	for(int i=1;i<=3;i++)
	{
		a[step]=i;
		f1(step+1,rest-i);
	}
	return ;
}
void f(int step,int rest)
{
	if(step>10)
	{
		if(rest==0)
		{
			for(int i=1;i<=10;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		} 
		return ;
	}
	if(rest==0)
	{
		return ; 
	}
	for(int i=1;i<=3;i++)
	{
		a[step]=i;
		f(step+1,rest-i);
	}
	return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	f(1,n);
	f(1,n);
	return 0;
}

