#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  double n,m;
  cin>>n>>m;

  if(n == 0 && m == 0)
  {
      cout<<0<<'\n';
      return;
  }

double total = (n*n)+(m*m);
int a;
double a1;
a=sqrt(total);
a1=sqrt(total);

if(a-a1 ==0)
{
    cout<<1<<endl;
}
else
{
    cout<<2<<'\n';
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