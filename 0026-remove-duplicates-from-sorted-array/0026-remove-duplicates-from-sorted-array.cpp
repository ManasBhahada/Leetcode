class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        for(int right=1;right<nums.size();right++){
                if(nums[right]!=nums[left]){
                    left++;
                    nums[left]=nums[right];
                }
        }
        if(nums.empty()){
            return 0;
        }
        else{
        return left+1;
        }
    }
};