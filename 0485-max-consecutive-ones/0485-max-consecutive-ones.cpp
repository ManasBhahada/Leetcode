class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxc=0;
        for(int right=0;right<nums.size();right++){
                if(nums[right]==1){
                    count++;
                    maxc=max(count,maxc);
                }
                else{
                count=0;
                }
        }
        return maxc;
    }
};