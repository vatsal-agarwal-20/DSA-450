#include <iostream>
using namespace std;

int search(int arr[], int n, int x, int k)
{
    // Complete the function	
    for(int i=0;i<n;)
    {
        if(arr[i]==x)
        return i;
        
        else
        i+=max(1, abs((arr[i]-x)/k));
    }
    return -1;
}    
int main()
{

return 0;
}