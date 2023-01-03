#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        unordered_map<long long int,int> m;
        
        long long int ans=0;
        long long int pre_sum=0;
        
        for(int i=0;i<n;i++)
        {
            pre_sum += arr[i];
            
            if(pre_sum == 0)
            ans++;
            
            if(m.find(pre_sum) != m.end())
            ans+=m[pre_sum];
            
            m[pre_sum]++;
        }
        return ans;
    }
int main()
{

return 0;
}