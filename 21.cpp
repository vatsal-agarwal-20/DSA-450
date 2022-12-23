#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
        // 3 conditions need to be checked
        
        /* i. Prefix sum is repeated i.e. for {4,2,-3,1,9}
              we have prefix sum as {4,6,3,4,13}
              we can see 4 is repeating which means between it we got a sum
              equal to zero 
              
          ii. We getting a subarray from starting index i.e for {3,-1,-2,9}
              prefix sum is {3,2,0,9}
              we get 0 in prefix sum
              
         iii. An element in array is 0 itself*/
         unordered_map<int,int> m;
         int prefix_sum=0;
         for(int i=0;i<n;i++)
         {
             if(arr[i]==0) return true;
             prefix_sum+=arr[i];
             m[prefix_sum]++;
         }
         for(auto i:m)
         {
             if(i.first == 0) return true;
             if(i.second >1) return true;
         }
         return false;
    }
int main()
{

return 0;
}