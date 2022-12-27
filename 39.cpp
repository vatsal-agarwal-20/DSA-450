#include <iostream>
#include <vector>
using namespace std;

int median(vector<vector<int>> &matrix, int R, int C){
        // code here   
        int n=R*C;
        int startVal=0;
        int endVal=2000;
        int midVal;
        while(startVal<=endVal)
        {
            midVal=(endVal+startVal)/2;
            int ans=0;
            for(int i=0;i<R;i++)
            {
                int low=0;
                int high=C-1;
                while(low<=high)
                {
                    int mid=low+(high-low)/2;
                    if(matrix[i][mid]<=midVal)
                    {
                        low=mid+1;
                    }
                    else
                    {
                        high=mid-1;
                    }
                }
                ans+=low;
            }
            if(ans<=n/2)
            {
                startVal=midVal+1;
            }
            else
            {
                endVal=midVal-1;
            }
        }
        return startVal;
    }
int main()
{

return 0;
}