#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
  string s;
  cin>>s;

  if(s[0] < 90)
  {
      cout<<"NO"<<'\n';
      return;
  }

  bool a=false,b=false,c=false;

  for(int i=0;i<s.length();i++)
  {
      if(s[i] == 'B' && !b)
      {
          cout<<"NO"<<'\n';
          return;
      }
      else if(s[i] == 'R' && !a)
      {
          cout<<"NO"<<'\n';
          return;
      }
      else if(s[i] == 'G' && !c)
      {
          cout<<"NO"<<'\n';
          return;
      }
      else
      {
          if(s[i] == 'r')
          {
              a = true;
          }
          else if(s[i] == 'g')
          {
              c = true;
          }
          else if(s[i] == 'b')
          {
              b = true;
          }
      }
  }

cout<<"YES"<<'\n';
 
}
 
int main()
{
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}