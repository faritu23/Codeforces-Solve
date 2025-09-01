
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   int ans=n;
   cout<<2<<endl;
   for(int i=n-1;i>0;i--)
   {
       cout<<i<<" "<<ans<<endl;
        ans+=i+1;
        ans/=2;
   }
   
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}