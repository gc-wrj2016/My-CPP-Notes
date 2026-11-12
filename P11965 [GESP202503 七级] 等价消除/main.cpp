#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
inline void run()
{
    int n;cin>>n;
    string s;cin>>s;
    int mark=0;
    unordered_map<int,int>count;
    count[0]=1;
    int ans=0;
    for(auto c:s)
    {
        int bit=c-'0';
        mark^=(1<<bit);
        ans+=count[mark];
        count[mark]++;
    }
    cout<<ans<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T=1;
    while(T--)run();
}
