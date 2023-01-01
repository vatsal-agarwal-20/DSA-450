#include <iostream>
#include <cmath>
using namespace std;

int countSquares(int N) {
        // code here
        int s= sqrt(N);
        if(s*s == N) return s-1;
        else return s;
    }
int main()
{

return 0;
}