#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string s;
  cin>>s;

  if(s.length() == 1)
  {
      cout<<s<<'\n';
      return;
  }

//   while (true)
//   {
//      if(count(s.begin(),s.end(),s[0]) > 1)
//      {
//         //s.erase(0,1);
//         s=s.substr(1);
//      }
//      else
//      {
//          break;
//      }
//   }
  
  map<char,int>m;

  for(int i=0;i<s.length();i++)
  {
      m[s[i]]++;
  }
  
  int i=0;
  for(;i<s.length();i++)
  {
      if(m[s[i]] <= 1)
      {
          break;
      }
     m[s[i]]--;
  }

  for(;i<s.length();i++)
  {
      cout<<s[i];
  }
  cout<<'\n';
 
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