#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
// void solve()
// {
//   int a,b;
//   cin>>a>>b;

//   int ans = 7 - max(a,b);

//   if(ans%2 == 0)
//   {
//     cout<<ans/2<<"/"<<6/2;
//   }
//   else if(ans%3 == 0)
//   {
//     cout<<ans/3<<"/"<<6/3;
//   }
//   else
//   {
//     cout<<ans<<"/"<<6;
//   }
 
// }

void solve()
{
    int a,b;
    cin>>a>>b;

    const string prob[7] = {"","1/1","5/6","2/3","1/2","1/3","1/6"};
    int ans = max(a,b);
    cout<<prob[ans];
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
//  int t;
//  cin>>t;
 
//while(t--)
solve();
 
return 0;
}