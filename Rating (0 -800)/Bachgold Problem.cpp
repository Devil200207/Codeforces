#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  if(n%2 != 0)
  {
    n/=2;
    n--;
    cout<<n+1<<'\n'<< 3 <<" ";
  }

  else
  {
    n/=2;
    cout<<n<<'\n';
  }

  for(int i=0;i<n;i++)
  {
    cout<<"2"<<" ";
  }

  cout<<'\n';
 
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