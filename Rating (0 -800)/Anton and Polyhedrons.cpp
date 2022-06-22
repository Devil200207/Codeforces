#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  string a = "Tetrahedron";
  string b = "Cube";
  string c = "Octahedron";
  string d = "Dodecahedron";
  string e = "Icosahedron";

  int ans=0;
  for(int i=0;i<n;i++)
  {
      string s;
      cin>>s;

      if(s == a)
      {
          ans+=4;
      }
      else if(s == b)
      {
          ans+=6;
      }
      else if(s == c)
      {
          ans+=8;
      }
      else if(s == d)
      {
          ans+=12;
      }
      else
      {
          ans+=20;
      }
  } 
  cout<<ans;
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