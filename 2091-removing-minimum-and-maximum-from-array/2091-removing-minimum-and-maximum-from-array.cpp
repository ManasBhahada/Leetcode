class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;
        int minIdx = 0;
        int maxIdx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIdx]) minIdx = i;
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }
        int a = min(minIdx, maxIdx);
        int b = max(minIdx, maxIdx);
        int opt1 = b + 1;
        int opt2 = n - a;
        int opt3 = (a + 1) + (n - b);
        return min({opt1, opt2, opt3});
    }
};
