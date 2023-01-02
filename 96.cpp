#include <iostream>
using namespace std;

int *findTwoElement(int *arr, int n) {
        // code here
        int a,b;
        for(int i=0;i<n;i++){
            
            if(arr[abs(arr[i])-1]<0){
                a = abs(arr[i]);
            }
            else{
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                b =i+1;
                break;
            }
        }
        
        int *arr_ans = new int[2];
        arr_ans[0]=a;
        arr_ans[1]=b;
        return arr_ans;
    }
int main()
{

return 0;
}