#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  if(k==1) return mat[0][0];
  priority_queue<int> pq;
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          pq.push(mat[i][j]);
          
          if(pq.size()>k)
          pq.pop();
      }
  }
  return pq.top();
  
}
*/
int kthSmallest(int mat[n][n], int n, int k)
{
  //Your code here
  int s=mat[0][0];
  int e=mat[n-1][n-1];
  
  while(s<e)
  {
      int mid= s+ (e-s)/2;
      int count=0;
      
      for(int i=0;i<n;i++)
      count+=upper_bound(mat[i],mat[i]+n,mid)-mat[i];
      
      if(count < k) s=mid+1;
      else e=mid;
  }
  return s;
  
}
int main()
{

return 0;
}