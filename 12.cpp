#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k= m+n-1;
        
        while(m-1>=0 && n-1>=0)
        {
            if(nums2[n-1]>nums1[m-1])
            {
                nums1[k--]=nums2[n-1];
                n--;
            }
            else
            {
                nums1[k--]=nums1[m-1];
                m--;
            }
        }
        while(n-1>=0)
        {
            nums1[k--]=nums2[n-1];
            n--;
        }
    }
int main()
{

return 0;
}