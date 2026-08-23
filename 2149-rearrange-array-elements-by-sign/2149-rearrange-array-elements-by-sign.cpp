class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int left=0;
        int neg=1;
        int n=nums.size();
        vector<int> res(n);
        for(int right=0;right<nums.size();right++){
            if(nums[right]>0){
                res[left]=nums[right];
                left=left+2;
            }
            if(nums[right]<0){
                res[neg]=nums[right];
                neg=neg+2;
            }
        }
        return res;
    }
};