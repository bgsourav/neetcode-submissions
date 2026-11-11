class Solution {
public:
    int maxProfit(vector<int>& prices) {
       vector<int> suffixSum(prices.size(),0);
       for(int i = prices.size()-1;i>=0;i--){
            suffixSum[i] = max(prices[i],(i != prices.size() - 1 ? suffixSum[i+1] : 0));
       }
        int answer = INT_MIN;
        for(int i = 0;i<suffixSum.size();i++){
            cout<<suffixSum[i]<<" ";
            answer = max(answer,suffixSum[i] - prices[i]);
        }
       return answer;
    }
};
