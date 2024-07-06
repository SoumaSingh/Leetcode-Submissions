class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int passThePillow(int n, int time) {
        int fullRounds = time / (n - 1);
        int extraTime = time % (n - 1);
        if (fullRounds % 2 == 0) {
            return extraTime + 1;
        } else {
            return n - extraTime; 
        }
    }
};