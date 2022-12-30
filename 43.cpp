#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int findMaxValue(int mat[5][5], int n) {
	// Write your code here.
    int maxVal=INT_MIN;
    int maxArr[n][n];
    maxArr[n-1][n-1]=mat[n-1][n-1];
    
    for(int i=n-2;i>=0;i--)
    {
        if(mat[n-1][i] > maxVal)
            maxVal=mat[n-1][i];
        
        maxArr[n-1][i]=maxVal;
    }
    maxVal=mat[n-1][n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(mat[i][n-1] > maxVal)
            maxVal=mat[i][n-1];
        
        maxArr[i][n-1]=maxVal;
    }
    
    for(int i=n-2;i>=0;i--)
    {
        for(int j=n-2;j>=0;j--)
        {
            if(maxArr[i+1][j+1] - mat[i][j] > maxVal)
            {
                maxVal=maxArr[i+1][j+1] - mat[i][j];
            }
            
            maxArr[i][j]=max(mat[i][j], max(maxArr[i][j+1],maxArr[i+1][j]));
        }
    }
    return maxVal;
}
int main()
{
int mat[5][5] = {
                      { 1, 2, -1, -4, -20 },
                      { -8, -3, 4, 2, 1 },
                      { 3, 8, 6, 1, 3 },
                      { -4, -1, 1, 7, -6 },
                      { 0, -4, 10, -5, 1 }
                    };
    cout << "Maximum Value is "
         << findMaxValue(mat,5);
return 0;
}