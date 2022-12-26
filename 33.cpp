#include <iostream>
using namespace std;

int minSwap(int arr[], int n, int k) {
        // Complet the function
        int smaller_than_k=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] <= k)
            {
                smaller_than_k++;
            }
        }
        
        // find maximum smaller element than k from every window of size = smaller_than_k
        int kk= smaller_than_k;
        int i=0,j=0;
        int bad=0;
        int maxi=INT_MIN;
        while(j<n)
        {
            if(arr[j]<=k)
            {
                bad++;
            }
            if(j-i+1 < kk)
            {
                j++;
            }
            else {
                maxi=max(maxi, bad);
                if(arr[i] <= k)
                {
                    bad--;
                }
                i++;
                j++;
            }
        }
        return smaller_than_k - maxi;
    }
int main()
{

return 0;
}