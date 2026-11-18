#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
struct egde
{
    int v,w;
};
bool vis[N];
vector<egde>g[N];
int des[N];
struct node
{
    int id;
    int w;
    bool operator < (const node& other)const
    {
        return w>other.w;
    }
};
inline void run()
{
    int n,m,s;
    cin>>n>>m>>s;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
    }
    fill(des,des+n+1,0x3f3f3f3f);
    des[s]=0;
    priority_queue<node>q;
    q.push({s,0});
    while(!q.empty())
    {
        auto f=q.top();
        q.pop();
        if(f.w>des[f.id])continue;
        vis[f.id]=true;
        des[f.id]=f.w;
        for(auto v:g[f.id])
        {
            if(!vis[v.v]&&des[v.v]>f.w+v.w)
            {
                des[v.v]=f.w+v.w;
                q.push({v.v,des[v.v]});
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<des[i]<<" ";
}
signed main()
{
    run();
}