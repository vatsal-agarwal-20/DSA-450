#include <iostream>
#include <vector>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int x= -1, i=0, j=m-1;
	    while(i<n && j>=0)
	    {
	        if(arr[i][j]==1)
	        {
	            j--;
	            x=i;
	        }
	        else if(arr[i][j]==0) i++;
	    }
	    return x;
	}
int main()
{

return 0;
}