#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
int n,m;
int r_3[N],c_3[N];
int r_2[N],c_2[N];
int r[N],c[N];
bool cmp(int a,int b)
{
	return a>b;
}
set<string>s; 
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int h,w;
	cin>>h>>w>>n;
	int rmin=h,cmin=w,rmax=0,cmax=0;
	for(int i=1;i<=n;i++)
	{
		cin>>r[i]>>c[i];
		r_3[i]=r[i],c_3[i]=c[i];
		r_2[i]=r[i],c_2[i]=c[i];
		rmin=min(r[i],rmin);
		rmax=max(rmax,r[i]);
		cmin=min(cmin,c[i]);
		cmax=max(cmax,c[i]);
	} 
	sort(r_3+1,r_3+n+1);
	sort(c_3+1,c_3+n+1);
	sort(r_2+1,r_2+n+1,cmp);
	sort(c_2+1,c_2+n+1,cmp);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		int x,y,x2,y2;
		if(r[i]==rmin)
		{
			x=r_3[2];
		}
		else
		{
			x=rmin;
		}
		if(r[i]==rmax)
		{
			y=r_2[2];
		}
		else
		{
			y=rmax;
		}
		if(c[i]==cmin)
		{
			x2=c_3[2];
		}
		else
		{
			x2=cmin;
		}
		if(c[i]==cmax)
		{
			y2=c_2[2];
		}
		else
		{
			y2=cmax;
		}
		string tmp=to_string(x)+' '+to_string(y)+' '+to_string(x2)+' '+to_string(y2);
		if(!s.count(tmp))
		{
			s.insert(tmp);
			ans++;
		}
	}
	cout<<ans; 
	return 0;
}

