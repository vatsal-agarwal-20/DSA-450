#include <iostream>
#include <vector>
using namespace std;

void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int start=0;int end=array.size()-1;int mid=0;
        while(mid <= end)
        {
            if(array[mid]<a)
            {
                swap(array[mid],array[start]);
                start++;
                mid++;
            }
            else if(a <= array[mid] && array[mid] <= b)
            {
                mid++;
            }
            else
            {
                swap(array[mid],array[end]);
                end--;
            }
        }
        
        
    }
int main()
{

return 0;
}