#include <iostream>
using namespace std;

int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A<=B)
        {
            if(B<=C) return B;
            else return max(A,C);
        }
        else
        {
            if(A<=C) return A;
            else return max(B,C);
        }
    }
int main()
{

return 0;
}