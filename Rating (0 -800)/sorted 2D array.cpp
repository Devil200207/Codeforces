#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;

 // O(NlogM) approach
// int bsearch(int**arr,int n,int s,int e,int x)
// {
//     if(s > e)
//     {
//         return -1;
//     }

//     int mid = (s+e)/2;
//     if(arr[n][mid] == x)
//     {
//         return mid;
//     }
//     else if(arr[n][mid] < x)
//     {
//         return bsearch(arr,n,mid+1,e,x);
//     }
//     else
//     {
//         return bsearch(arr,n,s,mid,x);
//     }
// }

// void solve()
// {
//   int n,m;
//   cin>>n>>m;

//   int**arr = new int*[n];
//   for(int i=0;i<n;i++)
//   {
//       arr[i] = new int[m];
//       for(int j=0;j<m;j++)
//       {
//           cin>>arr[i][j];
//       }
//   }

//   int x;
//   cin>>x;
  
//   bool a = false;
//   for(int i=0;i<n;i++)
//   {
//       int ans = bsearch(arr,i,0,m,x);
//       if(ans != -1)
//       {
//           a = true;
//           cout<<i<<" "<<ans;
//           break;
//       }
//   }

//   if(!a)
//   {
//       cout<<"false";
//   }
//   cout<<'\n';
//   for(int i=0;i<n;i++)
//   {
//       delete[]arr[i];
//   }
//   delete[]arr;
 
// }

bool helper(int** arr,int n,int m,int x) // O(n+m)
{
    int row = 0,col=m-1;

    while(row < n && col >= 0)
    {
        if(arr[row][col] == x)
        {
            return true;
        }
        else if(arr[row][col] < x)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    return false;
}

void solve()
{
    int n,m;
    cin>>n>>m;

    int**arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[m];
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;

    if(helper(arr,n,m,x))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    cout<<'\n';
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