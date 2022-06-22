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

        vector<int>arr;
        vector<int>arr1;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
            arr1.push_back(x);
        }

        sort(arr1.begin(),arr1.end());

        if(arr == arr1)
        {
            cout<<"NO"<<'\n';
        }
        else if(arr[0] >= arr[n-1])
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"YES"<<'\n';
        }
        
    }

    return 0;
}