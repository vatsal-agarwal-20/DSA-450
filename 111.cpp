#include <iostream>
using namespace std;

int findPivot(int nums[],int n)
{
    if(nums[0] <= nums[n-1])
    return -1;

    int pivot;
    int s=0,e=n-1;

    while(s<=e)
    {
        int mid= s+ (e-s)/2;

        if(mid < e && nums[mid]>nums[mid+1])
        return mid;

        else if(mid > s && nums[mid-1] > nums[mid])
        return mid-1;

        else if(nums[mid] >= nums[s])
        s=mid+1;

        else
        e=mid-1;
    }
    return -1;
}
int main()
{
int nums[]={5,6,7,1,2,3,4};
int n=7;

cout<<findPivot(nums,n)<<endl;
return 0;
}