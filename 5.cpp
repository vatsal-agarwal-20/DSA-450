#include <iostream>
#include <vector>
using namespace std;
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int s=0,e=nums.size()-1;
    while(s<e)
    {
        if(nums[s]<0 && nums[e]>0)
        {
            s++;
            e--;
        }
        else if(nums[s]<0 && nums[e]<0)
        {
            s++;
        }
        else if(nums[s]>0 && nums[e]<0)
        {
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
        else
        {
            e--;
        }
    }
    
    return nums;
}
int main()
{

return 0;
}