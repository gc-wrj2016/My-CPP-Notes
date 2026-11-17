#include<bits/stdc++.h>
using namespace std;
bool big(string a,string b)
{
    if(a.size()!=b.size())return a.size()>b.size();
    return a>b;
}
vector<int>Sub(vector<int>a,vector<int>b)
{
    for(int i=0;i<a.size();i++)
    {
        if(b.size()>i)a[i]-=b[i];
        if(a[i]<0)a[i+1]--,a[i]+=10;
    }
    return a;
}
signed main()
{
    string sa,sb;
    cin>>sa>>sb;
    if(big(sb,sa))
    {
        cout<<'-';
        swap(sa,sb);
    }
    vector<int>a,b;
    for(int i=sa.size()-1;i>=0;i--)a.push_back(sa[i]-'0');
    for(int i=sb.size()-1;i>=0;i--)b.push_back(sb[i]-'0');
    vector<int>c=Sub(a,b);
    for(int i=c.size()-1;i>=0;i--)cout<<c[i];
}