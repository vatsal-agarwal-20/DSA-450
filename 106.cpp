#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int getSetBits(int n)
    // {
    //     if(n==0) return 0;
    //     int count=0;
    //     while(n!=0)
    //     {
    //         int d=n%2;
    //         count+=d;
    //         n=n/2;
    //     }
    //     return count;
    // }
    static bool cmp(int a,int b)
    {
        return __builtin_popcount(a) > __builtin_popcount(b);
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr,arr+n,cmp);
    }
int main()
{

return 0;
}