class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int minDifference(vector<int>& nums) {
        int numsSize = nums.size();
        if (numsSize <= 4) return 0;
        sort(nums.begin(), nums.end());
        int minDiff = INT_MAX;
        for (int left = 0, right = numsSize - 4; left < 4; left++, right++) {
            minDiff = min(minDiff, nums[right] - nums[left]);
        }
        return minDiff;
    }
};