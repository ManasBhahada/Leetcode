class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int prf=0;
       int maxp=INT_MIN;
       int minprice=prices[0];
       for(int right=1;right<prices.size();right++){
        prf=prices[right]-minprice;
        maxp=max(prf,maxp);
        minprice=min(minprice,prices[right]);
       } 
       if(maxp<0){
        return 0;
       }
       else{
       return maxp;
       }
    }
};