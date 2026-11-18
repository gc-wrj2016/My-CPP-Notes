#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N];
vector<int>g[N];
int rd[N];
bool vis[N];
int dp[N][11];
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        rd[v]++;
    }
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        if(rd[i]==0)q.push(i);
        dp[i][a[i]]=1;
    }
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(auto v:g[f])
        {

            rd[v]--;
            if(rd[v]==0)q.push(v);
            for(int i=1;i<=10;i++)
            {
                if(i<=a[v])
                {
                    dp[v][a[v]]=max(dp[v][a[v]],dp[f][i]+1);
                }
                dp[v][i]=max(dp[f][i],dp[v][i]);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=10;j++)
        {
            ans=max(dp[i][j],ans);
        }
    }
    cout<<ans;
}