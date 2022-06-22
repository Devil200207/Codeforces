#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int* arr = new int[n];
//   int*arr1 = new int[n];
//   for(int i=0;i<n;i++)
//   {
//       int x;
//       cin>>x;
//       arr[i] = abs(x);
//       arr1[i] = abs(x);
//   }
  
//   sort(arr1,arr1+n);

//   bool ans = true;
//   for(int i=0;i<n;i++)
//   {
//       if(arr[i] != arr1[i])
//       {
//           ans = false;
//           break;         
//       }
//   }

//   if(ans)
//   {
//       cout<<"YES"<<'\n';
//   }
//   else
//   {
//       cout<<"NO"<<'\n';
//   }
  
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  int mid;
  if(n%2 == 0)
  {
      mid = n/2 - 1;
  }
  else
  {
      mid = n/2;
  }

  if(arr[mid] > 0)
  {
      cout<<"YES"<<'\n';
  }
  else
  {
      cout<<"NO"<<'\n';
  }
  

  delete[]arr;
//   delete[]arr1;
 
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