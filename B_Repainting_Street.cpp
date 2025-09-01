
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k; cin>>n>>k;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   int mn=LLONG_MAX;
   for(int i=1;i<=100;i++)
   {
        int a=i;
        int l=0,r=0,ans=0;
        while(r<n)
        {
            while(l<=r)
            {
                if(v[l]==a){
                    l++;
                }
                else break;
            }

            if((r-l+1)==k)
            {
                ans++;
                l=r+1;
            }
            r++;
            
        }
        for(int j=l;j<n;j++)
        {
            if(v[j]!=i){
                ans++;break;
            }
        }
        mn=min(ans,mn);
        // cout<<a<<" "<<ans<<" "<<endl;
   }
   
   cout<<mn<<endl;
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