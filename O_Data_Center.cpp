#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   int mn=LLONG_MAX;
   for(int i=1;i<=1e5;i++)
   {
        int a=n/i;
        if(a*i==n)
        {
            mn=min(i+i+a+a,mn);
        }
   }
   cout<<mn<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}