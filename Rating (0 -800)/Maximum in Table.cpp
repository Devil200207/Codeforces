#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int**arr = new int*[n];
  for(int i=0;i<n;i++)
  {
    arr[i] = new int[n];
  }

  for(int i=0;i<n;i++)
  {
    arr[i][0] = 1;
  }
  for(int i=0;i<n;i++)
  {
    arr[0][i] = 1;
  }

  for(int i=1;i<n;i++)
  {
    for(int j=1;j<n;j++)
    {
        arr[i][j] = arr[i-1][j] + arr[i][j-1];
    }
  }

  cout<<arr[n-1][n-1];
  for(int i=0;i<n;i++)
  {
    delete[]arr[i];
  }
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