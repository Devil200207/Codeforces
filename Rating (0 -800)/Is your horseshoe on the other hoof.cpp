#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
 int n = 4;
 int ans=0;
 int* arr = new int[n];

 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 sort(arr,arr+n);
 for(int i=0;i<n-1;i++)
 {
     if(arr[i] == arr[i+1])
     {
         ans++;
     }
 }
 cout<<ans<<'\n';
 
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