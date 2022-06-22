#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
bool palindrome(int* arr, int n)
{
    // Initialise flag to zero.
    int flag = 0;
 
    // Loop till array size n/2.
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        // Check if first and last element are different
        // Then set flag to 1.
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
 
    // If flag is set then print Not Palindrome
    // else print Palindrome.
    if (flag == 1)
        return false;
    else
        return true;
} 

void solve()
{
  
  string s;
  cin>>s;
  int n;
  cin>>n;

  int*arr = new int[4];
  int ans = 0;
  
  arr[0] = s[0] -'0';
  arr[1] = s[1] -'0';
  arr[2] = s[3] -'0';
  arr[3] = s[4] -'0';

  int a = n;
  while(a <= 1440)
  {
     int h = n/60;
     int m = n%60;

     arr[0]+=h/10;
     arr[1]+=h%10;

     arr[2]+=m/10;
     arr[3]+=m%10;
   
   if(palindrome(arr,4))
   {
    ans++;
   }
     a+=n;

  }
cout<<ans<<'\n';
delete[]arr;


 
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