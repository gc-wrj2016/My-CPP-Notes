#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N=1005;
char a[N][N];
int h[N][N];
inline void run()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='F')h[i][j]=h[i-1][j]+1;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        h[i][m+1]=0;
        stack<int>s;
        for(int j=1;j<=m+1;j++)
        {
            int sum=0;
            while(!s.empty()&&h[i][s.top()]>h[i][j])
            {
                int hi=h[i][s.top()];
                s.pop();
                int w=s.empty()?j-1:j-s.top()-1;
                ans=max(ans,hi*w);
            }
            s.push(j);
        }
    }
    cout<<ans*3;
}
signed main()
{
    run();
}