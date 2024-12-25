//method 1 o(n*n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            int data=prices[i];
            int currMaxi=0;
            for(int j=i;j<n;j++){
                if(prices[j]>data){
                    currMaxi=prices[j]-data;
                }
                if(currMaxi>maxi){
                    maxi=currMaxi;
                }
            }
        }
        return maxi;      
    }
};
//way 2 o(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=0;
        int currPrices=prices[0];
        for(int i=1;i<n;i++){
            if(currPrices>prices[i]){
                currPrices=prices[i];
            }
            int currProfit=abs(currPrices-prices[i]);
            maxi=max(currProfit,maxi);
        }
        return maxi;
    }
};
