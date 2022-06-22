#include<bits/stdc++.h>
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

  int ans=0,u;
  for(int i=0;i<n;i++)
  {
      u = arr[i];

      if(i!=0 && i<n-1)
      {
          if(arr[i-1] < arr[i] && arr[i] >arr[i+1])
          {
              ans++;
              arr[i] = arr[i+1];
          }
      }
  }
  cout<<ans<<'\n';
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<'\n';
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