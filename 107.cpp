#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>> temp(nums.size());
	    for(int i=0;i<nums.size();i++)
	    {
	        temp[i]={nums[i],i};
	    }
	    sort(temp.begin(),temp.end());
	    
	    int c=0;
	    for(int i=0;i<nums.size();i++)
	    {
	        if(temp[i].second != i)
	        {
	            c++;
	            swap(temp[i],temp[temp[i].second]);
	            i--;
	        }
	    }
	    return c;
	}
int main()
{

return 0;
}