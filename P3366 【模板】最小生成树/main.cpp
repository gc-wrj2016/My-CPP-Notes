#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N=5e3+5,INF=0x3f3f3f3f;
struct edge
{
    int v,w;
};
int n,m;
vector<edge> g[N];
bool vis[N];
void prim()
{
    int u=1;
    int sum=0;
    vis[1]=true;
    for(int _=1;_<n;_++)
    {
        int mn=INF,mv=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i])
            {
                for(auto v:g[i])
                {
                    if(!vis[v.v]&&mn>v.w)
                    {
                        mn=v.w;
                        mv=v.v;
                    }
                }
            }
        }
        if(!mv)
        {
            cout<<"orz\n";
            return ;
        }
        vis[mv]=1;
        sum+=mn;
    }
    cout<<sum;
    
}
inline void run()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int u,v,w;cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    prim();
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    run();
    return 0;
}