#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  set<int>arr1;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    arr1.insert(arr[i]);
  }

  int ans = arr1.size();
  if((n-ans)%2 == 0)
  {
    cout<<ans;
  }
  else
  {
    cout<<ans-1;
  }

  cout<<'\n';
   
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