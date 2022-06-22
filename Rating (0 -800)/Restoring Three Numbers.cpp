#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int*arr = new int[4];
  for(int i=0;i<4;i++)
  {
    cin>>arr[i];
  } 

  sort(arr,arr+4);
  
  int a = arr[3] - arr[2];
  int b = arr[0] - a;
  int c = arr[1] - a;

  cout<<a<<" "<<b<<" "<<c;
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