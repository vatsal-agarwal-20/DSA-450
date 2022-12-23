#include <iostream>
#include <vector>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            
            vector<int> ans;
            int i=0,j=0,k=0;
            
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i] == B[j] && B[j] == C[k])
                {
                    if(ans.size()==0 || ans.back() != A[i])
                    {
                        ans.push_back(A[i]);
                    }
                    i++; j++; k++;
                }
                else if(A[i]<B[j]) i++;
                else if(B[j]<C[k]) j++;
                else k++;
            }
            return ans;
        }
int main()
{

return 0;
}