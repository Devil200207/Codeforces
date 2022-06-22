#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  
  double ans = 0;
  int* arr = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      ans+= (arr[i]);
  }

  ans/=n;
  //ans*=100;

  cout<<setprecision(12)<<fixed<<ans<<'\n';
  delete[]arr;  
 
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