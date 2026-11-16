#include<bits/stdc++.h>
using namespace std;
vector<int>Mul(vector<int>a,int b)
{
    vector<int>c;
    int d=0;
    for(int i=0;i<a.size();i++)
    {
        d+=a[i]*b;
        c.push_back(d%10);
        d/=10;
    }
    while(d)c.push_back(d%10),d/=10;
    return c;
}
vector<int>Add(vector<int>a,vector<int>b)
{
    vector<int>c;
    int d=0;
    unsigned len=max(a.size(),b.size());
    for(int i=0;i<len;i++)
    {
        if(a.size()>i)d+=a[i];
        if(b.size()>i)d+=b[i];
        c.push_back(d%10);
        d/=10;
    }
    while(d)c.push_back(d%10),d/=10;
    return c;
}
signed main()
{
    int n;
    cin>>n;
    vector<int>ans={0},cj={1};
    for(int i=1;i<=n;i++)
    {
        cj=Mul(cj,i);
        ans=Add(ans,cj);
    }
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i];
    }
}