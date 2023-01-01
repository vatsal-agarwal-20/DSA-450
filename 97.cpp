#include <iostream>
using namespace std;

// Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        
        int maj_index=0;int count=1;
        for(int i=1;i<size;i++)
        {
            if(a[maj_index]==a[i])
            count++;
            
            else
            count--;
            
            if(count==0)
            {
                maj_index=i;
                count++;
            }
        }
        // now we have a candidate for majority element
        
        //we will traverse the array again to confirm if the candidtae is
        // majority element or not
        
        int cand=a[maj_index];count=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==cand) count++;
        }
        if(count > size/2) return cand;
        else return -1;
    }
int main()
{

return 0;
}