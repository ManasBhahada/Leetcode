class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return; 
        k = k % n;          
        if (k == 0) return;
        nums.insert(nums.end(), nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            nums[i]=nums[n-k+i];
        }
        nums.resize(n);
    }
};