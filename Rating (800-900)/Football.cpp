#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string s;
  cin>>s;

  int count = 1;
  for(int i=0;i<s.length()-1;i++)
  {
    if(s[i] == s[i+1])
    {
        count++;
    }    
    else
    {
        count = 1;
    }

    if(count == 7)
    {
        cout<<"YES";
        return;
    }
  }

  cout<<"NO";
 
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