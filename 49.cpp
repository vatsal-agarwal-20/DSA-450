#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
string s= "ababshdjonncss";
unordered_map<char,int> m;
for(int i=0;i<s.length();i++)
{
    m[s[i]]++;
}
for(auto i:m)
{
    if(i.second > 1)
    {
        cout<<i.first<<" count: "<<i.second<<endl;
    }
}
return 0;
}