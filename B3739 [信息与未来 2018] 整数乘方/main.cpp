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
inline void run()
{
    int a,n;
    cin>>a>>n;
    vector<int>b={1};
    for(int i=1;i<=n;i++)
    {
        b=Mul(b,a);
    }
    int cnt1=0,cnt2=0;
    for(auto i:b)cnt1+=i%2==0,cnt2+=i%2!=0;
    cout<<cnt2-cnt1;
}
signed main()
{
    run();
}