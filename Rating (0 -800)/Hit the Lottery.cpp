#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int ans=0;
  int arr[] = {100,20,10,5,1};

  for(int i=0;i<5;i++)
  {
      ans+= n/arr[i];
      n%=arr[i];
  }
  
  cout<<ans<<'\n';
 
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