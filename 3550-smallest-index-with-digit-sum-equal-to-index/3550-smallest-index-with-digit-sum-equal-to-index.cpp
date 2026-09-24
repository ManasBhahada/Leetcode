class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int temp=0;
        int digit=0;
        vector<int> ar(nums.size(),INT_MAX);
        for(int i=0;i<nums.size();i++){
            digit=0;
            temp=nums[i];
            while(temp>0){
                digit+=temp%10;
                temp=temp/10;
            }
            if(digit==i){
                ar[i]=digit;
            }
        }
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(ar[i]<min){
                min=ar[i];
            }
        }
        if(min==INT_MAX){
            return -1;
        }
        else{
        return min;
        }
    }
};