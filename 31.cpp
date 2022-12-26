#include <iostream>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int mini=INT_MAX;
        int sum=0;int start=0;int end=0;
        while(end < n)
        {
            while(sum <= x && end < n)
            {
                sum+=arr[end++];
            }
            
            while(sum > x && start < n)
            {
                if(end-start < mini)
                mini=end-start;
                
                sum -= arr[start++];
            }
        }
        return mini;
        
    }
int main()
{

return 0;
}