class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
            if(nums[i]<min){
                min=nums[i];
            }
        }
        vector<int> output(nums.size());
        vector<int> count(max-min+1,0);
        
        for(int i=0;i<nums.size();i++){
            count[nums[i]-min]++;
        }
        for(int i=1;i<count.size();i++){
            count[i]+=count[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            output[count[nums[i]-min]-1]=nums[i];
            count[nums[i]-min]--;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=output[i];
        }
        return nums[nums.size()-k];
    }
};
