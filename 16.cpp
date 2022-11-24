#include <iostream>
using namespace std;

void merge(long long int a[],long long int beg, long long int mid, long long int end, long long int &result)
    {
         // Your code here
         long long int n1=mid-beg+1;
         long long int n2=end-mid;
         
         long long int left[n1];
         long long int right[n2];
         for(int i=0;i<n1;i++)
         {
             left[i]=a[beg+i];
         }
         for(int i=0;i<n2;i++)
         {
             right[i]=a[mid+1+i];
         }
         long long int i=0,j=0,k=beg;
         
         while(i<n1 && j<n2)
         {
             if(left[i]<=right[j])
             {
                 a[k++]=left[i];
                 i++;
             }
             else
             {
                 a[k++]=right[j];
                 j++;
                 result+= n1-i;
             }
         }
         while(i<n1)
         {
             a[k++]=left[i];
             i++;
         }
         while(j<n2)
         {
             a[k++]=right[j];
             j++;
         }
         
    }
    void mergeSort(long long int a[],long long int beg,long long int end, long long int &result)
    {
        if(beg < end)
        {
        long long int mid= (beg+end)/2;
        
        mergeSort(a,beg,mid,result);
        mergeSort(a,mid+1,end,result);
        merge(a,beg,mid,end,result);
        }
        
    }
  
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int result=0;
        
        mergeSort(arr,0,N-1,result);
        
        return result;
    }
int main()
{

return 0;
}