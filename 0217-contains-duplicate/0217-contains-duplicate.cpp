class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int found=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==0){
                found=1;
                break;
            }
        }
        if(found==1){
            return true;
        }
        else{
            return false;
        }
    }
};