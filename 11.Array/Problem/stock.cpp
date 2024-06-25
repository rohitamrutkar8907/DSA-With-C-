#include <bits/stdc++.h>
using namespace std;
    int maxProfit(vector<int>& prices) {
         int buy = INT_MAX;
        int profit = 0;
        int intraday = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            intraday = prices[i] - buy;
            if(profit < intraday){
                profit = intraday;
            }
        }
        return profit;
}
int main()
{

    vector<int> a{7,1,5,3,6,4};
    cout<<maxProfit(a);
    
}