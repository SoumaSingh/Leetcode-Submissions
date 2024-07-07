class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int numWaterBottles(int numBottles, int numExchange) {
        int consumedBottles = 0;

        while (numBottles >= numExchange) {
            int K = numBottles / numExchange;
            consumedBottles += numExchange * K;
            numBottles -= numExchange * K;
            numBottles += K;
        }
        return consumedBottles + numBottles;
    }
};