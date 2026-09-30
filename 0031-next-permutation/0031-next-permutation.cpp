class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                pivot=i-1;
                break;
            }
        }
    if (pivot!=-1){
    int i=nums.size()-1;
    while(nums[i]<=nums[pivot]){
        i--;
    }
    swap(nums[pivot],nums[i]);
}
    reverse(nums.begin()+pivot+1,nums.begin()+nums.size());
    }
};