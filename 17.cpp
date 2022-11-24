#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;int p=0;
        for(int i=0;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            p=max(p,prices[i]-mini);
        }
        return p;
    }
int main()
{

return 0;
}