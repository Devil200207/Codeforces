#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  
  char**arr = new char*[8];
  for(int i=0;i<8;i++)
  {
    arr[i] = new char[8];
    for(int j=0;j<8;j++)
    {
        cin>>arr[i][j];
    }
  } 

  for(int i=1;i<8;i++)
  {
    for(int j=1;j<8;j++)
    {
        if(arr[i-1][j-1] == '#' && arr[i-1][j+1] == '#')
        {
            cout<<i+1<<" "<<j+1<<'\n';
            for(int k=0;k<8;k++)
            {
                delete[]arr[k];
            }
            delete[]arr;

            return;
        }
    }
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