#include <iostream>
using namespace std;
void sort012(int a[], int n)
    {
        // code here 
        int b=0,c=0,d=0;int k=0;
        for(int i=0;i<n;i++)
        {
            switch(a[i])
            {
                case 0:
                b++;
                break;
                
                case 1:
                c++;
                break;
                
                case 2:
                d++;
                break;
            }
        }
        while(b>0)
        {
            a[k++]=0;
            b--;
        }
        while(c>0)
        {
            a[k++]=1;
            c--;
        }
        while(d>0)
        {
            a[k++]=2;
            d--;
        }
    }
int main()
{

return 0;
}