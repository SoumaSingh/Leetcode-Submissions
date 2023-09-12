class Solution {
    int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
const int MOD = 1e9 + 7;
public:
    int countOrders(int n) {
        long long count = 1;
        for (int i = 2; i <= n; ++i) {
            count = (count * (2 * i - 1) * i) % MOD;
        }
        return (int)count;
    }
};