#include <iostream>
#include <vector>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int i=0;int j=1;

        for(auto num:nums)
        {
            if(num>=0)
            {
                ans[i]=num;
                i+=2;
            }
            if(num<0)
            {
                ans[j]=num;
                j+=2;
            }
            
        }
        return ans;
    }
int main()
{

return 0;
}