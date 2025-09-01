
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];


   int ans=0;
   map<int,int>mp;
   mp[1]=0;
   mp[2]=0;
   for(int i=0;i<n;i++)
   {
        if(v[i]==1 || v[i]==3)ans++;
   }
   cout<<ans<<endl;
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