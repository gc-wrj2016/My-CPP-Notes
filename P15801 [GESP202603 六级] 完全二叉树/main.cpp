#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e5+5;
int n;
struct Tree_Node
{
    int l,r;
}a[N];
int f[N],h[N];
void dfs(int u)
{
    if(u==0)return ;
    if(a[u].l==0&&a[u].r==0)
    {
        f[u]=2,h[u]=1;//2是满1是完全，h是高度
        return ;    
    }
    dfs(a[u].l);
    dfs(a[u].r);
    int ls=a[u].l;
    int rs=a[u].r; 
    if(f[ls]==2&&f[rs]==2&&h[ls]==h[rs])f[u]=2; //满
    else if(f[ls]==2&&f[rs]==1&&h[ls]==h[rs])f[u]=1;
    else if(f[ls]==2&&f[rs]==2&&h[ls]==h[rs]+1)f[u]=1;
    else if(f[ls]==2&&f[rs]==0&&h[ls]==h[rs]+1)f[u]=1;
    else if(f[ls]==1&&f[rs]==2&&h[ls]==h[rs]+1)f[u]=1;
    h[u]=max(h[ls],h[rs])+1;
    return ;
} 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n; 
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].r;
    }
    dfs(1);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(f[i]==2||f[i]==1)ans++;
    }
    cout<<ans;
    return 0;
}
