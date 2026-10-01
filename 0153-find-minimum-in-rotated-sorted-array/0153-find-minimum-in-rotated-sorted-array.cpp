class Solution {
public:
    int findMin(vector<int>& nums) {
        int found=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                found=nums[i+1];
            }
        }
        return found;
    }
};