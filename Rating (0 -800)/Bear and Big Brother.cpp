#include<bits/stdc++.h>
using namespace std;

int helper(int a,int b)
{
    if(a == b)
    {
        return 1;
    }
    
    int ans = 0;
    while(a <= b)
    {
        a = a*3;
        b = b*2;
        ans++;
    }

    return ans;

}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<helper(a,b);

    return 0;
}