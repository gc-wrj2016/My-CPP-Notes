#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5,M=2e5+5;
bool vis[N];
int cnt1=0,cnt2=0;
vector<int>g[N];
int mxans=0,mnans=0;
void dfs(int u,bool c)
{
    if(vis[u])return ;
    vis[u]=true;
    if(c)cnt1++;
    else cnt2++;
    for(int v:g[u])
    {
        if(!vis[v])
        {
            dfs(v,!c);
        }
    }
    return ;
}
inline void run()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cnt1=0;
            cnt2=0;
            dfs(i,true);
            mxans+=max(cnt1,cnt2);
            mnans+=min(cnt1,cnt2);
        }
    }
    cout<<mnans<<" "<<mxans<<"\n";
}
signed main()
{
    int T=1;
    while(T--)run();
}