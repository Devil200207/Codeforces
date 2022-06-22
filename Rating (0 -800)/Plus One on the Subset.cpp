#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  int max1=INT_MIN,min1=INT_MAX;

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    min1 = min(min1,arr[i]);
    max1 = max(max1,arr[i]);
  }

  cout<<max1-min1<<'\n';
  delete[]arr;
 
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