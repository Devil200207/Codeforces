#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
int helper(string s)
{
  int count = 0;
  int max1 = INT_MIN;
  for(int i=1;i<s.length();i++)
  {
      if(s[i-1] == 'B')
      {
          count++;
          continue;
      }
      else
      {
          max1 = max(max1,count);
          count = 0;
      }
  }
  return max1;
} 

int helper2(string s)
{
    int pos=0;
  int count = 0;
  int max1 = INT_MIN;
  for(int i=1;i<s.length();i++)
  {
      if(s[i-1] == 'B')
      {
          count++;
          continue;
      }
      else
      {
          if(count > max1)
          {
              max1 = count;
              count = 0;
              pos=i; 
          }
      }
  }
  return pos;
}

void solve()
{
  int n,m;
  cin>>n>>m;

  string s;
  cin>>s;
  
  int max1 = helper(s);
  int count = 0;

  if(max1 >= m)
  {
      cout<<0;
  }
  else
  {
     int endp = helper2(s);

     while(max1 < m)
     {
     if(endp < (s.length()-1))
     {
         s[endp+1] = 'B';    
     }
     else
     {
         s[endp - max1] = 'B';
     }
     count++;
     max1 = helper(s);
     }
  }

  cout<<count<<'\n';
 
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