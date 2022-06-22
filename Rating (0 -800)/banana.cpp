#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    int ans = x >> 1;

        if(ans < y)
        {
            cout<<ans<<'\n';
        }
        else 
        {
            cout<<y<<'\n';
        }
	}
	return 0;
}
