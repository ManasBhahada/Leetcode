class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int res;
        for(int i=0;i<nums.size();i++){
            maxi=INT_MIN;
            mini=INT_MAX;
            for(int j=i;j<nums.size();j++){
                mini=min(nums[j],mini);
            }
            for(int k=0;k<=i;k++){
                maxi=max(maxi,nums[k]);
            }
            res=maxi-mini;
        if(res<=k){
            return i;
            break;
        }
        }
    return -1;
    }
};