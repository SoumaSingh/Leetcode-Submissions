class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()==1)
        {
            return false;
        } else{
        for (int i = 0; i < arr.size() - 2; i++) {
            if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1) {
                return true;
            }
        }
        }
        return false;
    }
};