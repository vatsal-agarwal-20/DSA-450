#include <iostream>
using namespace std;
int isPalindrome(string S)
	{
	    // Your code goes here
	    string t=S;
	    int i=0,j=t.length()-1;
	    while(i<=j)
	    {
	        swap(t[i],t[j]);
	        i++; j--;
	    }
	    if(S == t) return 1;
	    else return 0;
	}
int main()
{

return 0;
}