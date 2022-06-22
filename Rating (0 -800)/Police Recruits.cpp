#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  int count = 0;
  int cop = 0;

  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;

      if(x == -1)
      {
          if(cop == 0)
          {
              count++;
          }
          else
          {
              cop--;
          }
      }
      else
      {
          cop+=x;
      }
  }

  cout<<count;
 
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