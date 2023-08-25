class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mn=0;
        int ans=0;
        
        for(int i=1;i<n;i++){
            if(prices[mn]>prices[i]){
                mn=i;
            }
            ans=max(ans,prices[i]-prices[mn]);
        }

        return ans; 
    }
    

};