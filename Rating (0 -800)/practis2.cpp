#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int count = 0,ans;

    for(int i=0;i<s1.length();i++)
    {
        int a = s1[i];
        int b = s2[i];

        if(a == b || (a+32) == b || (a-32) == b)
        {
            count++;
        }
        else
        {
            if(a > 90 && b > 90)
            {
                ans = a - b;
            }
            else if(a > 90 && b < 90)
            {
                ans = (a-32) - b;
            }
            else if(a < 90 && b > 90)
            {
                ans = a - (b-32);
            }
            else if(a <= 90 && b <= 90)
            {
                ans = a-b;
            }
            break;
        }
        
    }

    if(count == s1.length())
    {
        cout<<0;
    }
    else if(ans > 0)
    {
        cout<<1;
    }
    else
    {
        cout<<-1;
    }
  

    return 0;
}