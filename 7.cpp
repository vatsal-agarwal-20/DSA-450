#include <iostream>
using namespace std;
void rotate(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        swap(arr[i],arr[n-1]);
    }
}
int main()
{

return 0;
}