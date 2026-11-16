#include<bits/stdc++.h>
using namespace std;
vector<int>Mul(vector<int>a,int b)
{
    int d=0;
    vector<int>c;
    for(int i=0;i<a.size();i++)
    {
        d+=a[i]*b;
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
    vector<int>ans={1};
    for(int i=1;i<=n;i++)ans=Mul(ans,2);
    ans[0]--;
    for(int i=ans.size()-1;i>=0;i--)cout<<ans[i];   
}