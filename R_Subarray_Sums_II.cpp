#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k; cin>>n>>k;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];

   int l=0,r=0,ans=0,sum=0;
   while(r<n)
   {
        sum+=v[r];
        if(sum>=k)
        {
            while(sum>=k)
            {
                if(sum==k)ans++;
                sum-=v[l];
                l++;
            }
        }
        r++;
   }
   cout<<ans<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}