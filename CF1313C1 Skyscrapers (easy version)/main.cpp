#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=500005;
int ans[N];
int a[N],l[N],r[N];
inline void run()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    stack<int>s;
    for(int i=1;i<=n;i++)
    {
        while(!s.empty()&&a[s.top()]>=a[i])s.pop();
        if(s.empty())
        {
            l[i]=a[i]*i;
        }
        else
        {
            l[i]=l[s.top()]+a[i]*(i-s.top());
        }
        s.push(i);
    }
    while(!s.empty())s.pop();
    for(int i=n;i>=1;i--)
    {
        while(!s.empty()&&a[s.top()]>=a[i])s.pop();
        if(s.empty())
        {
            r[i]=a[i]*(n-i+1);
        }
        else
        {
            r[i]=r[s.top()]+a[i]*(s.top()-i);
        }
        s.push(i);
    }
    int tmp=0,id=0;
    for(int i=1;i<=n;i++)
    {
        if(tmp<l[i]+r[i]-a[i])
        {
            tmp=l[i]+r[i]-a[i];
            id=i;
        }
    }
    ans[id]=a[id];
    for(int i=id-1;i>=1;i--)
    {
        ans[i]=min(a[i],ans[i+1]);
    }
    for(int i=id+1;i<=n;i++)
    {
        ans[i]=min(a[i],ans[i-1]);
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
}
signed main()
{
    int T=1;
    while(T--)run();
}