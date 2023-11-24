class Solution {
    int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        deque<int> queue;
        for (int num: piles) {
            queue.push_back(num);
        }
        int ans = 0;
        while (!queue.empty()) {
            queue.pop_back(); 
            ans += queue.back();
            queue.pop_back();
            queue.pop_front();
        }
        return ans;
    }
};