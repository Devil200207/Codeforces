#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string s;
  cin>>s;

  int n = s.length();
  if(n%2 == 0)
  {
      cout<<"Alice"<<" ";
      int ans = 0;
      for(int i=0;i<n;i++)
      {
          ans+= (s[i] - 96);
      }
      cout<<ans<<'\n';
  }
  else if(n == 1)
  {
      cout<<"Bob"<<" "<<s[0]-96<<'\n';           
  }
  else
  {
      int ans1 = s[0]-96;
      int ans2 = s[n-1]-96;
      int ans3 = 0;
      int ans=0;
      
      if(ans1 >= ans2)
      {
          for(int i=0;i<n-1;i++)
          {
              ans3+= (s[i]-96);
          }
          ans = ans3-ans2;
      }
      else
      {
          for(int i=1;i<n;i++)
          {
              ans3+=(s[i]-96);
          }
          ans = ans3-ans1;
      }

      cout<<"Alice"<<" "<<ans<<'\n';
  }
 
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