class Solution {
public:
    int sumCounts(vector<int>& nums) {
      long long count=0;
      long long sum=0;
      for(int i=0;i<nums.size();i++){
        unordered_set<int> distinct;
        for(int j=i;j<nums.size();j++){
            distinct.insert(nums[j]);
            count=distinct.size();
            sum+=(count*count);
        }
      }
      return sum;  
    }
};