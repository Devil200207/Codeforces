#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int k,l,m,n,d;
  cin>>k>>l>>m>>n>>d;

  int count=0;
  for(int i=1;i<=d;i++)
  {
    if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
    {
     count++;
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