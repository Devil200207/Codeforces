#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  int ans = 0;
  cin>>arr[0];

  int max1 = arr[0];
  int min1 = arr[0];

  for(int i=1;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i] > max1 || arr[i] < min1)
    {
        ans++;
        max1 = max(max1,arr[i]);
        min1 = min(min1,arr[i]);
    }
  }

  cout<<ans;
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