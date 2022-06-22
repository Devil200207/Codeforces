#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,p,q;
  cin>>n>>p;
  int * arr = new int[n+1]();

  for(int i=0;i<p;i++)
  {
      int a;
      cin>>a;
      arr[a]++;
  }

  cin>>q;
  for(int i=0;i<q;i++)
  {
       int a;
      cin>>a;
      arr[a]++;
  }

  for(int i=1;i<n+1;i++)
  {
      if(arr[i] == 0)
      {
          cout<<"Oh, my keyboard!";
          return;
      }
  }
  cout<<"I become the guy.";
 
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