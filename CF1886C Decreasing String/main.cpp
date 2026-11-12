#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
inline void run()
{
    string s;cin>>s;
    int n=s.size();
    ll pos;cin>>pos;
    int l=0,r=n;
    while(l+1<r)
    {
        int mid=(l+r)>>1;
        ll sum=(ll)(n-mid+1+n)*mid/2;
        if(sum>=pos) r=mid;
        else l=mid;
    }
    int k=l;
    ll id=pos-(ll)k*(2*n-k+1)/2;
    string st="";
    for(auto c:s)
    {
        while(k>0&&!st.empty()&&st.back()>c)
        {
            st.pop_back();
            k--;
        }
        st.push_back(c);
    }
    while(k>0&&!st.empty())
    {
        st.pop_back();
        k--;
    }
    cout<<st[id-1];
}
signed main()
{
    int T=1;cin>>T;
    while(T--)run();
}