#include <iostream>
using namespace std;

string reverseWord(string str){
    
  //Your code here
  int s=0,e=str.length()-1;
  
  while(s<e)
  {
      swap(str[s],str[e]);
      s++;
      e--;
  }
  return str;
}

int main()
{

return 0;
}