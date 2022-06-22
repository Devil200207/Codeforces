#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,k;
  cin>>n>>k;

  int ans = 5-k;
  int count=0;

  int*arr = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i] <= ans)
    {
        count++;
    }
  }

  cout<<count/3;
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