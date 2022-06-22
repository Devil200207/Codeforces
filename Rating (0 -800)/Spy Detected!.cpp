#include<iostream>
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

  int ans;

  for(int i=1;i<n;i++)
  {
      if(arr[i] != arr[i-1])
      {
          if(arr[i] == arr[i+1] && (i+1) < n)
          {
              ans = i;
          }
          else
          {
              ans = i+1;
          }
          break;
      }
  }
  cout<<ans<<'\n';
  delete[]arr;
 
}
 
int main()
{
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}