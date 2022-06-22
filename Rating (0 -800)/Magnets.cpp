#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int ans=1;
  int* arr = new int[n];

  cin>>arr[0];
  for(int i=1;i<n;i++)
  {
      cin>>arr[i];  

      if(arr[i-1] != arr[i])
      {
          ans++;
      }          
  }
  delete[]arr;
  cout<<ans;
 
}
 
int main()
{
//  int t;
//  cin>>t;
 
//while(t--)
solve();
 
return 0;
}