#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,q; cin>>n>>q;
   vector<int> v(n),idx(55);
   for(int i=0;i<n;i++)cin>>v[i];
   int f[100]={0};
   for(int i=0;i<n;i++)
   {
        if(f[v[i]]==0)
        {
            idx[v[i]]=i+1;
        }
        f[v[i]]++;
   }

   while(q--)
   {
        int x;cin>>x;
        int a=idx[x];
        for(int i=0;i<54;i++)
        {
            if(idx[i]<a && idx[i]!=0)
            {
                idx[i]++;
            }
        }
        idx[x]=1;
        cout<<a<<" ";
   }
   cout<<endl;

}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}