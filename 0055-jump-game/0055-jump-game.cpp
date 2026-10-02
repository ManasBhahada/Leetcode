class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=nums.size()-1;
        for(int j=nums.size()-2;j>=0;j--){
            if(nums[j]>=i-j){
                i=j;
            }
        }
        if(i==0){
            return true;
        }
        return false;
    }
};
