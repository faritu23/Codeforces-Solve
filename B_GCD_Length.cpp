
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int a,b,c; cin>>a>>b>>c;
   int cc=1,aa=1,bb=1,size=1,size1=1;
   while(size<c)
   {
        cc*=7;
        aa*=7;
        bb*=7;
        string s=to_string(cc);
        size=s.size();
   }
   size1=size;
   while(size1<a)
   {
    aa*=3;
    string s=to_string(aa);
    size1=s.size();
   }
   size1=size;
   while(size1<b)
   {
    bb*=5;
    string s=to_string(bb);
    size1=s.size();
   }

   cout<<aa<<" "<<bb<<endl;
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