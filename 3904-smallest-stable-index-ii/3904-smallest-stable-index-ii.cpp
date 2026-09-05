class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int length = nums.size();
        if (length == 0) return -1;
        vector<int> minright(length);
        minright[length - 1] = nums[length - 1];
        for (int i = length - 2; i >= 0; i--) {
            minright[i] = min(minright[i + 1], nums[i]);
        }
        int maxleft = INT_MIN;
        for (int i = 0; i < length; i++) {
            maxleft = max(maxleft, nums[i]);  
            if (maxleft - minright[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};
