class Solution {
public:
    int fastio = [] {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        return 0;
    }();
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != target[i])
                return false;
        }
        return true;
    }
};