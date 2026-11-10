#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e6+5;
int  c1,m1,c2,m2,c3,m3;

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>c1>>m1>>c2>>m2>>c3>>m3; 
	int cnt=1;
	for(int i=1;i<=100;i++)
	{
		if(cnt==1)
		{
			int c=c2-m2;
			m2+=min(m1,c);
			m1-=max(c2,c);
		}
		if(cnt==2)
		{
			int c=c3-m3;
			m3+=min(m2,c);
			m2-=max(c3,c);
		}
		if(cnt==3)
		{
			int c=c1-m1;
			m1+=min(m3,c);
			m3-=max(c1,c);
		}
	}
	cout<<m1<<endl<<m2<<endl<<m3;
	return 0;
}

