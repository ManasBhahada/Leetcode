class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int maxs=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==(nums[i]+1)){
                sum+=nums[i+1];
            }
            else{
                break;
            }
        }
        maxs=sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(maxs==nums[i]){
                maxs=maxs+1;
            }
        }
        return maxs;
    }
};