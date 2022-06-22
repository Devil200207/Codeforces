#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{

 int n;
 cin>>n;

 int ans = 0;

 while(n--)
 {
     int a,b;
     cin>>a>>b;

     if((b-a) >= 2)
     {
         ans++;
     }
 }
 cout<<ans;

return 0;
}