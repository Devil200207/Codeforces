#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    if(x <= n)
	    {
	        cout<<x<<'\n';
	    }
	    else
	    {
	        while(x > n)
	        {
	            x= x-n-1;
	            cout<<x<<'\n';
	        }
	        
	    }
	}
	return 0;
}
