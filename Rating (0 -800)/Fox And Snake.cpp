#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;
  
  bool a = true;
  for(int i=0;i<n;i++)
  {
    if(i%2 == 0)
    {
      for(int j=0;j<m;j++)
      {
        cout<<"#";
      }
      cout<<'\n';
    }

    else
    {
      if(a)
      {
        a = false;
        for(int j=0;j<m-1;j++)
        {
          cout<<".";
        }
        cout<<"#"<<'\n';
      }

      else
      {
        a = true;
        cout<<"#";
        for(int j=1;j<m;j++)
        {
          cout<<".";
        }
        cout<<'\n';
      }

    }
  }

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