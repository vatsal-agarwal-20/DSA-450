#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m=0){
    //code
     if(m==0 || n==0) return 0;
    
    sort(a.begin(),a.end());
    
    if(n<m) return -1;
    
    int i=0;long long mini=INT_MAX;
    while(m<n)
    {
        mini = min(mini, (a[m-1]-a[i]));
        i++; m++;
    }
    return mini;
    }
int main()
{

return 0;
}