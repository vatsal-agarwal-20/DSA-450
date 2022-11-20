#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int duplicate= -1;
        for(int i=0;i<nums.size();i++)
        {
            int curr=abs(nums[i]);
            
            if(nums[curr]<0)
            {
                duplicate=curr;
                break;
            }
            nums[curr] *= -1;
        }
        return duplicate;
    }
    //Another method 

    // int findDuplicate(vector<int>& nums) {
    //     while (nums[0] != nums[nums[0]])
    //         swap(nums[0], nums[nums[0]]);
    //     return nums[0];
    // }
int main()
{

return 0;
}
// Both the methods have T.C -> O(N) and S.C -> O(1)
//But in both, the arrays was modified