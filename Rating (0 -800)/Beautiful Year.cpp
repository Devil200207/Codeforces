#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  while(true)
  {
      n+=1;

      int a = n/1000;
      int b = (n/100)%10;
      int c = (n/10)%10;
      int d = n%10;

      if(a != b && a != c && a != d && b != c && b != d && c != d)
      {
          break;
      }
  }

  cout<<n<<'\n';
 
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