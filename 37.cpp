#include <iostream>
#include <vector>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int rs=0,re=r-1,cs=0,ce=c-1;
        int total=r*c;int count=0;
        vector<int> ans;
        
        while(count<total)
        {
            for(int i=cs;count<total && i<=ce;i++)
            {
                ans.push_back(matrix[rs][i]);
                count++;
            }
            rs++;
            
            for(int i=rs;count<total && i<=re;i++)
            {
                ans.push_back(matrix[i][ce]);
                count++;
            }
            ce--;
            
            for(int i=ce;count<total && i>=cs;i--)
            {
                ans.push_back(matrix[re][i]);
                count++;
            }
            re--;
            
            for(int i=re;count<total && i>=rs;i--)
            {
                ans.push_back(matrix[i][cs]);
                count++;
            }
            cs++;
            
        }
        return ans;
    }
int main()
{

return 0;
}