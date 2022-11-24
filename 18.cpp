#include <iostream>
#include <unordered_map>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> m;int c=0;
        for(int i=0;i<n;i++)
        {
            int a=arr[i];
            int b= k-arr[i];
            if(m[b])
            {
                c+=m[b];
            }
            m[arr[i]]++;
        }
        return c;
    }
int main()
{

return 0;
}