#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  for(int i=1;i<10;i++)
  {
      if((n*i)%10 == 0)
      {
          cout<<i;
          break;
      }
      
      int ans = n*i;
    //   if((ans+m)%10 == 0)
    //   {
    //       cout<<i;
    //       break;
    //   }
      if((ans-m)%10 == 0)
      {
          cout<<i;
          break;
      }
  }

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