#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr1 = new int[n];
  int*arr2 = new int[n];

  for(int i=0;i<n;i++)
  {
      cin>>arr1[i];
  }

  for(int i=0;i<n;i++)
  {
      cin>>arr2[i];
  }

  int*ans = new int[n];
  int max1 = INT_MIN;
  for(int i=0;i<n;i++)
  {
      if(arr1[i] < arr2[i])
      {
          cout<<"NO"<<'\n';
          return;
      }
      
      ans[i] = arr1[i]-arr2[i];
      max1 = max(max1,ans[i]);
  }
  
  bool ansa = true;
  for(int i=0;i<n;i++)
  {
      if(ans[i] != max1)
      {
          if(arr2[i] != 0)
          {
              ansa = false;
              break;
          }
      }      
  }

  if(ansa)
  {
      cout<<"YES";
  }
  else
  {
      cout<<"NO";
  }
  cout<<'\n';

  delete[]arr1;
  delete[]arr2;
  delete[]ans;


 
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