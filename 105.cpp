#include <iostream>
#include <vector>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here     
        long long int prod=1;
        int countZero = 0;
        int indOfZero = -1;
        for(int i=0;i<n;i++)
        {
            if(nums[i] !=0)
            {
            prod *=nums[i];
            }
            else
            {
                countZero++;
                indOfZero=i;
            }
        }
        vector<long long int> res(n,0);
        if(countZero >= 2) return res;
        else if(countZero == 1){
            res[indOfZero] = prod;
            return res;
        }
        
        for(int i=0;i<n;i++)
        {
            res[i] = prod/nums[i];
        }
        return res;
    }
int main()
{

return 0;
}