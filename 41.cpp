#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        
        int arr[N*N];int k=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                arr[k++]=Mat[i][j];
            }
        }
        sort(arr,arr+k);
        k=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                Mat[i][j]=arr[k++];
            }
        }
        return Mat;
    }
int main()
{

return 0;
}