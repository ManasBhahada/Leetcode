class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left;
        int sum;
        vector<int> res(2);
        int n=nums.size();
        for(int right=0;right<n;right++){
            left=0;
            sum=0;
            sum+=nums[right];
            while(left<right){
                sum+=nums[left];
                if(sum==target){
                    res[0]=left;
                    res[1]=right;
                    return res;
                }
                else{
                    sum-=nums[left];
                    left++;
                }
            }
        }
        return {};
    }
};