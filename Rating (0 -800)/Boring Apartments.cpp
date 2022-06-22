#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int count = 0;
  int num;
  while(n > 0)
  {
    count++;
    num = n%10;
    n/=10;
  }

  int ans = ((num-1)*10);
  int cans;
  if(count == 1)
  {
    cans = 1;
  }
  else if(count == 2)
  {
    cans = 3;
  }
  else if(count == 3)
  {
    cans = 6;    
  }
  else
  {
    cans = 10;
  }
  ans+=cans;

  cout<<ans<<'\n';
 
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}