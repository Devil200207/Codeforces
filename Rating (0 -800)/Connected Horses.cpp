#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
 int fact(int t)
 {
     int ans = 1;
     for(int i=1;i<=t;i++)
     {
         ans = (ans*i)%mod;
     }
     return ans;
 }

 int bfs(int** arr,int i,int j,int n,int m)
 {
     int total = 1;
     arr[i][j] = 2;

     if(i-2 >= 1 && j-1 >= 1 && arr[i-2][j-1] == 1)
     {
         total+=bfs(arr,i-2,j-1,n,m);
     }
     if(i-2 >= 1 && j+1 <= m && arr[i-2][j+1] == 1)
     {
         total+=bfs(arr,i-2,j+1,n,m);
     }
     if(i-1 >= 1 && j-2 >= 1 && arr[i-1][j-2] == 1)
     {
         total+=bfs(arr,i-1,j-2,n,m);
     }
     if(i-1 >=1 && j+2 <= m && arr[i-1][j+2] == 1)
     {
         total+=bfs(arr,i-1,j+2,n,m);
     }
     if(i+1 <= n && j-2 >= 1 && arr[i+1][j-2] == 1)
     {
         total+=bfs(arr,i+1,j-2,n,m);
     }
     if(i+2 <= n && j-1 >= 1 && arr[i+2][j-1] == 1)
     {
         total+=bfs(arr,i+2,j-1,n,m);
     }
     if(i+1 <= n && j+2 <= m && arr[i+1][j+2] == 1)
     {
         total+=bfs(arr,i+1,j+2,n,m);
     }
     if(i+2 <= n && j+1 <= m && arr[i+2][j+1] == 1)
     {
         total+=bfs(arr,i+2,j+1,n,m);
     }
     return total;


 }

void func(int** arr,int n,int m)
{
    int ans = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j] == 1)
            {
                int t = bfs(arr,i,j,n,m);
                ans = (ans * fact(t))%mod; 
            }
        }
    }
    cout<<ans<<'\n';
}

void solve()
{
  int n,m,q;
  cin>>n>>m>>q;

  int** arr = new int*[n+1];
  for(int i=0;i<=n;i++)
  {
      arr[i] = new int[m+1];
      for(int j=0;j<=m;j++)
      {
          arr[i][j] = 0;
      }
  }

  while(q--)
  {
      int x,y;
      cin>>x>>y;
      arr[x][y] = 1;
  }

  func(arr,n,m); 

  for(int i=0;i<=n;i++)
  {
      delete[]arr[i];
  }
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