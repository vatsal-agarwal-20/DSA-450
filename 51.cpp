#include <iostream>
using namespace std;
bool rotateString(string s, string goal) {
        
        if(s.length() != goal.length()) return false;

        string temp=s+s;
        return (temp.find(goal) != string::npos); 
        //similar to map.find()!=map.end()
        
    }
int main()
{

return 0;
}