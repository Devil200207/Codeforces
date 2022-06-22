#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int x,y;
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

        int ans = 0;
        if(x == 2 && y == 2)
        {
            cout<<ans;
        }
        else
        {
            ans = abs(2-x) + abs(2-y);
        }
        cout<<ans;
    
    return 0;
}