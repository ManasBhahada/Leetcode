class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n) {
            int ans = -1;
            for (int i = 0; i < n; i++) {
                if (nums[i] > ans) {
                    ans = nums[i];
                }
            }
            return ans;
        }
        if (k == 1) {
            int ans = -1;
            for (int i = 0; i < n; i++) {
                int count = 0;
                for (int j = 0; j < n; j++) {
                    if (nums[j] == nums[i]) {
                        count++;
                    }
                }
                if (count == 1 && nums[i] > ans) {
                    ans = nums[i];
                }
            }
            return ans;
        }
        int ans = -1;
        int countFirst = 0;
        int countLast = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[0]) {
                countFirst++;
            }
            if (nums[i] == nums[n-1]) {
                countLast++;
            }
        }
        if (countFirst == 1 && nums[0] > ans) {
            ans = nums[0];
        }
        if (countLast == 1 && nums[n-1] > ans) {
            ans = nums[n-1];
        }
        return ans;
    }
};