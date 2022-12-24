#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> s;
      for(int i=0;i<N;i++)
      {
          s.insert(arr[i]);
      }
      int ans=0;
      for(int i=0;i<N;i++)
      {
          if(s.find(arr[i]-1) != s.end())
          {
              continue;
          }
          else
          {
              int count=0;
              int current=arr[i];
              while(s.find(current) != s.end())
              {
                  count++;
                  current++;
              }
              ans=max(ans,count);
          }
      }
      return ans;
    }
int main()
{

return 0;
}