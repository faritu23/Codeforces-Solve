
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s;int k;
   string s1;int k1;
   cin>>s>>k>>s1>>k1;
   int n=s.size() + k, m=s1.size() + k1;
   if(n>m ){
    cout<<">"<<endl;return;
   }
   if(n<m ){
    cout<<"<"<<endl;return;
   }

   while(s1.size()>s.size())s.push_back('0');
   while(s.size()>s1.size())s1.push_back('0');
   if(s>s1)cout<<">"<<endl;
   else if(s<s1)cout<<"<"<<endl;
   else cout<<"="<<endl;
   
   
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