#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int n;
    cin>>n;

    int ans = 0;
    int nans =0;
    while(n > 0)
    {
        int ans1 = n%10;

        if(ans1 == 7 || ans1 == 4)
        {
            ans++;
        }
        else
        {
            nans++;
        }
        n = n/10;
    }

   if(ans == 4 || ans == 7)
        cout<<"YES"<<'\n';
  
        else
        {
            cout<<"NO"<<'\n';
        }




    return 0;
}