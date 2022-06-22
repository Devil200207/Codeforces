#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n%7 == 0)
        {
            cout<<n<<'\n';
            continue;
        }

        n-=n%10;

        for(int i=0;i<10;i++)
        {
            int temp = n+i;
            if(temp%7 == 0)
            {
                cout<<temp<<'\n';
                break;
            }
        }
    }
    return 0;
}