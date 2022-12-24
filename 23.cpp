#include <iostream>
#include <vector>
using namespace std;
long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long a=1;
	    long long b=INT_MIN;
	   
	    for(auto i:arr)
	    {
	        a=a*i;
	        
	        b=max(b,a);
	        
	        if(a==0)
	        {
	            a=1;
	        }
	    }
	    a=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        a=a*arr[i];
	        b=max(b,a);
	        
	        if(a==0) a=1;
	    }
	    return b;
	}
int main()
{

return 0;
}