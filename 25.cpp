#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countOccurence(int arr[], int n, int k) {
        // Your code here
        int count= n/k;int c=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto i:m)
        {
            if(i.second > count)
            c++;
        }
        return c;
    }
int main()
{

return 0;
}