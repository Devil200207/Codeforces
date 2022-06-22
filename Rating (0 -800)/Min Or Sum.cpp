#include<bits/stdc++.h>
#define int long long int
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int* arr = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  int sum = accumulate(arr,arr+n,0);

  if(sum&1)
  {
      cout<<sum<<'\n';
  }
  else
  {
      cout<<sum/2<<'\n';
  }
  delete[]arr;
 
}
 
signed main()
{
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}