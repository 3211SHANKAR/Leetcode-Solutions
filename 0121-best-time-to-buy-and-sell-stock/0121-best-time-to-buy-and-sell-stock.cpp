class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp=prices[0];
       int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<temp){
                temp=prices[i];
            
        }
        profit =max(profit,prices[i]-temp);
        }
        return profit;
    }
};