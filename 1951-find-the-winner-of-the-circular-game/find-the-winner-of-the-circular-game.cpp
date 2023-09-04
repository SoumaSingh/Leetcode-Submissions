class Solution {
public:
   int findTheWinner(int n, int k) {
    int p = 1;
    for (int i = 1; i < n; ++i) {
        p = (k + p - 1) % (i + 1) + 1;
    }
    return p;
}

};