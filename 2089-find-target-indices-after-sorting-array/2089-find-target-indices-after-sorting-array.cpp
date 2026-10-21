class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<int> count(maxVal+1,0);
        for(int i : nums){
            count[i]++;
        }
        int index = 0;
        for (int i=0;i<=maxVal;i++) {
            while (count[i]>0){
                nums[index]=i;
                index++;
                count[i]--;
            }
        }
        vector<int> res;
        int n=nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]==target){
                res.push_back(j);
            }
        }
        return res;
    }
};