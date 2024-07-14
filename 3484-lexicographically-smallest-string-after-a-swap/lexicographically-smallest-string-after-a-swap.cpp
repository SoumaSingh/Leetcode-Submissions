class Solution {
public:
    int fastio = [] {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        return 0;
    }();
    string getSmallestString(string s) {
        for (int i = 0; i < s.size() - 1; i++) {
            if ((s[i] + s[i + 1]) % 2 == 0 && s[i] > s[i + 1]) {
                char k = s[i];
                char b = s[i + 1];
                s[i] = b;
                s[i + 1] = k;
                break;
            }
        }
        return s;
    }
};