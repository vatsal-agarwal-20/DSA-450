#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int l=0;int r=nums.size()-1;
        
        while(l <= r)
        {
            int mid= l + (r-l)/2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            
            if(nums[mid]>nums[r])
            {
                if(target < nums[mid] && target >= nums[l])
                    r=mid-1;
                else
                    l=mid+1;
            }
            else if(nums[mid]<nums[l])
            {
                if(target > nums[mid] && target <= nums[r])
                    l=mid+1;
                else
                    r=mid-1;
            }
            else
            {
                if(target < nums[mid])
                    r=mid-1;
                else 
                    l=mid+1;
            }
        }
        return -1;
    }
int main()
{

return 0;
}