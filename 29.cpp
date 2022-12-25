#include <iostream>
using namespace std;
long long trappingWater(int arr[], int n){
        // code here
        
        int leftMax=arr[0];int rightMax=arr[n-1];
        int left[n];
        int right[n];
        
        for(int i=0;i<n;i++)
        {
            leftMax=max(leftMax,arr[i]);
            
            left[i]=leftMax;
        }
        for(int i=n-1;i>=0;i--)
        {
            rightMax=max(rightMax,arr[i]);
            
            right[i]= rightMax;
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum+ (min(left[i],right[i])-arr[i]); 
        }
        return sum;
    }
int main()
{

return 0;
}