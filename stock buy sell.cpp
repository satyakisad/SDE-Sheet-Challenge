#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int greatest = prices[prices.size()-1];
    int profit=0;
    for(int i=prices.size()-1;i>=0;i--)
    {
        if(greatest<=prices[i])
        {
            greatest=prices[i];
            continue;
        }
        profit=max(profit,greatest-prices[i]);
    }
    return profit;
}