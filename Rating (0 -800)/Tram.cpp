#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    pair<int,int>* arr = new pair<int,int>[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }

    int ans = 0; //= arr[0].second;
    int fans = 0;
    int ans1 = 0;

    for(int i=0;i<n;i++)
    {
         fans+= arr[i].first;
        ans1+=  arr[i].second;
        
        if((ans1 - fans) > ans)
        {
            ans = ans1-fans;
        }
    }
    cout<<ans;
    delete[]arr;

    return 0;
}