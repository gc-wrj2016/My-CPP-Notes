#include<bits/stdc++.h>
using namespace std;
const int N=3e6+5;
int a[N],ans[N];
inline void run()
{
    memset(ans,0,sizeof ans);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    stack<int>s;
    for(int i=n;i>=1;i--)
    {
        while(!s.empty()&&a[s.top()]>=a[i])s.pop();
        ans[i]=(s.empty()?0:s.top());
        s.push(i);
    }
    for(auto i:ans)cout<<i<<" ";
}
signed main()
{
    int T=1;
    while(T--)run();
}