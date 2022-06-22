#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  
  int count = 1;
  for(int i=2;i*i<n;i++)
  {
    if(n%i == 0)
    {
        count+=2;
    }
  }

  if((double)sqrt(n) == (int)sqrt(n))
  {
    count++;
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