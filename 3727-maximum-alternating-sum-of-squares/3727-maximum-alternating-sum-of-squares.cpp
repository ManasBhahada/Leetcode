class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=-1*nums[i];
            }
        }
        sort(nums.begin(), nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            cout << nums[i];
        }
        if(nums.size()%2==0){
            for(int i=0;i<nums.size()/2;i++){
                sum+=nums[i]*nums[i];
            }
            for(int i=(nums.size()/2);i<nums.size();i++){
                sum-=nums[i]*nums[i];
            }
        }
        else{
            for(int i=0;i<=nums.size()/2;i++){
                sum+=nums[i]*nums[i];
            }
            for(int i=(nums.size()/2)+1;i<nums.size();i++){
                sum-=nums[i]*nums[i];
            }
        }
        return sum;
    }
};