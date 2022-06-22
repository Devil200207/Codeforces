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

        set<int>x;
        set<int>y;

        while(n--)
        {
            int l,r;
            cin>>l>>r;

            x.insert(l);
            y.insert(r);
        }

        cout<<x.size() + y.size()<<'\n';


    }

    return 0;
}