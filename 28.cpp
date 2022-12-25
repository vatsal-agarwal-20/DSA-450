#include <iostream>
#include <algorithm>
using namespace std;

bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i< n-2;i++)
        {
            int a=i+1,b=n-1;
            
            while(a < b)
            {
                int sum= A[i]+A[a]+A[b];
                
                if(sum == X) return 1;
                else if(sum > X) b--;
                else a++;
            }
        }
        return 0;
    }
int main()
{

return 0;
}