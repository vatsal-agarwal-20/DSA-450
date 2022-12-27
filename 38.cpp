#include <iostream>
#include <vector>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        int s=0,e=m*n-1;
        while(s<=e)
        {
            int mid= s + (e-s)/2;
            if(matrix[mid / n ][mid % n ]==target) return true;
            else if(matrix[mid / n ][mid % n ] > target) e=mid-1;
            else s=mid+1;
        }
        return false;
    }
int main()
{

return 0;
}