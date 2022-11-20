#include <iostream>
using namespace std;

int minJumps(int arr[], int n){
        // Your code here
        int pos=0;
        int des=0;
        int jump=0;
        if(n==1) return 0;
        if(arr[0]==0) return -1;
        for(int i=0;i<n-1;i++)
        {
            des=max(des,arr[i]+i);
            
            if(pos==i)
            {
                pos=des;
                jump++;
            }
        }
        if(des<n-1) return -1;
        return jump;
    }
int main()
{

return 0;
}