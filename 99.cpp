#include <iostream>
#include <algorithm>
using namespace std;

bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int i=0,j=1;
    
    while(i < size && j < size)
    {
        if(i != j && arr[j]-arr[i] == n)
        {
            return true;
        }
        else if(i != j && arr[j]-arr[i] > n)
        {
            i++;
        }
        else j++;
    }
    return false;
}
int main()
{

return 0;
}