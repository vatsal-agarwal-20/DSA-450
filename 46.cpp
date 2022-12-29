#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> findCommonElements(vector<vector<int>> &mat)
{
    // Write your code here
    int n=mat.size();int m=mat[0].size();
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<m;i++)
    {
        if(mp.find(mat[0][i])==mp.end())
        {
            mp[mat[0][i]]=1;
        }
    }
    for(int i=1;i<n;i++)
    {
        // sort(mat[i].begin(),mat[i].end());
        for(int j=0;j<m;j++)
        {
            if(mp[mat[i][j]]==i)
            {
                mp[mat[i][j]]++;
            }
        }
    }
    for(auto i:mp)
    {
        if(i.second == n)
            ans.push_back(i.first);
    }
    return ans;
}
int main()
{
vector<vector<int>> mat
{
    {1,2,3,6},
    {3,4,5,6},
    {2,3,6,8}
};
vector<int> ans;
ans=findCommonElements(mat);
for(auto i: ans) cout<<i<<" ";

return 0;
}