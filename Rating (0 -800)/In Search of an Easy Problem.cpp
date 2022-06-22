#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;

      if(a == 1)
      {
          cout<<"HARD"<<'\n';
          return;
      }
  }
  cout<<"EASY"<<'\n';
 
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