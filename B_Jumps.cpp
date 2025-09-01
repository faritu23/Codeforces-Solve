
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   
    int n; cin>>n;
    int sum=0,cnt=0;
    for(int i=1;;i++)
    {
        sum+=i;
        cnt++;
        if(sum==n){
            cout<<cnt<<endl;return;
        }
        if(sum>n)break;
    }
    // cout<<sum<<endl;
    if(sum==n+1)cnt++;
    cout<<cnt<<endl;
    
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