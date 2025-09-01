
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   if(n<3 || n==4){
    cout<<-1<<endl;return;
   }
   int three=0,five=0,seven=0;

   if(n>=5)
   {
    five=(n/5)-1;
    int a=n%5;
    if(a==1)three+=2;
    else if(a==2)seven++;
    else if(a==3){
        three++;
        five++;
    }
    else if(a==4)three+=3;
    else five++;
   }
   else if(n==3) three++;
   cout<<three<<" "<<five<<" "<<seven<<endl;
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