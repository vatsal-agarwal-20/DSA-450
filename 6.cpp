#include <iostream>
#include <unordered_map>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_map<int,int> uni;
        int c=0;
        for(int i=0;i<n;i++)
        {
            uni[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            uni[b[i]]++;
        }
        for(auto i:uni)
        {
            if(i.second > 0)
            {
                c++;
            }
        }
        return c;
    }
int main()
{

return 0;
}