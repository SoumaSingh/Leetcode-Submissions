class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();

    std::vector<int> L(length, 1);
    std::vector<int> R(length, 1);

    for (int i = 1; i < length; ++i) {
        L[i] = L[i - 1] * nums[i - 1];
    }

    for (int i = length - 2; i >= 0; --i) {
        R[i] = R[i + 1] * nums[i + 1];
    }

    std::vector<int> answer(length);
    for (int i = 0; i < length; ++i) {
        answer[i] = L[i] * R[i];
    }

    return answer;
    }
};