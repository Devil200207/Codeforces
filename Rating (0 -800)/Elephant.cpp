#include<bits/stdc++.h>
using namespace std;

long helper(int n)
{
    if(n <= 5 && n > 0)
    {
        return 1LL;
    }

    long ans = 1;
    n = n-5;

    while(n > 0)
    {
        if(n >= 5)
        {
            ans++;
            n-=5;
        }
        else
        {
            ans++;
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    
    cout<<helper(n);

    return 0;
}