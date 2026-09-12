class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0,mb=prices[0];
        for(int i=1;i<prices.size();i++){
            p=max(p,prices[i]-mb);
            mb=min(mb,prices[i]);
        }
        return p;
    }
};
