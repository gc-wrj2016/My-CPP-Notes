#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e5+5;
int n,m;
int vis[N];
vector<int>t[N];
int maxh=0,maxid;
void find(int u,int h,int fa)
{
    if(vis[u]==1)
    {
        if(maxh<h)
        {
            maxh=h;
            maxid=u;
        }
    }
    for(auto i:t[u])
    {
        if(i==fa)continue;
        find(i,h+1,u);
    }
    return ;
}
bool ans=false;
int q=0;
void dfs(int u,int cnt,int fa)
{
    if(q==1)return ;
    if(cnt==n)
    {
        q=1;
        ans=true;
        return ;
    }
    for(auto i:t[u])
    {
        if(i==fa)continue;
        dfs(i,cnt+1,u);
    }
    return ;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int flag=0,bx=0;
        for(int i=1;i<=n;i++)
        {
            cin>>vis[i];
            if(flag==0&&vis[i]==1)
            {
                bx=i;
                flag=1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            int u,v;
            cin>>u>>v;
            t[u].push_back(v);
            t[v].push_back(u);
        }
        maxh=0;
        find(bx,0,0);
        ans=false;
        dfs(maxid,0,0);
        cout<<(ans==true?"Yes":"No")<<endl;
    }
	return 0;
}

