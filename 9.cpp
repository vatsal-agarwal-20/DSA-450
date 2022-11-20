#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
        // code here
        int maxi=INT_MIN;int mini=INT_MAX;
        
        sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k < 0) continue;
            
            //Fixing last element for max
            maxi=max(arr[i-1]+k,arr[n-1]-k);
            
            //Fixing first element for min
            mini=min(arr[0]+k,arr[i]-k);
            
            diff=min(diff, maxi-mini);
        }
        return diff;
    }
int main()
{

return 0;
}