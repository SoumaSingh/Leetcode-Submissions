class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int minKBitFlips(vector<int>& nums, int k) {
        vector<bool> flipped(nums.size(), false);
        int validFlipsFromPastWindow = 0;
        int flipCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i >= k) {
                if (flipped[i - k]) {
                    validFlipsFromPastWindow--;
                }
            }
            if (validFlipsFromPastWindow % 2 == nums[i]) {
                if (i + k > nums.size()) {
                    return -1;
                }
                validFlipsFromPastWindow++;
                flipped[i] = true;
                flipCount++;
            }
        }

        return flipCount;
    }
};