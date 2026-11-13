#include<bits/stdc++.h>
using namespace std;
const int N=1e5+4;
struct edge
{
    int u,w;
};
vector<edge>g[N];
bool vis[N];
int dis[N];
inline void run()
{
    memset(dis,0x3f,sizeof dis);
    int n,m,s;
    cin>>n>>m>>s;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
    }
    int u=s;
    dis[u]=0;
    while(!vis[u])
    {
        vis[u]=true;
        for(auto e:g[u])
        {
            if(!vis[e.u]&&dis[e.u]>e.w+dis[u])
            {
                dis[e.u]=e.w+dis[u];
            }
        }
        int minn=0x3f3f3f3f;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i]&&dis[i]<minn)
            {
                minn=dis[i];
                u=i;
            }
        } 
    }
    for(int i=1;i<=n;i++)
    {
        if(dis[i]==0x3f3f3f3f)cout<<INT_MAX<<" ";
        else cout<<dis[i]<<" ";
    }
}
int main()
{
    int T=1;
    while(T--)run();
}