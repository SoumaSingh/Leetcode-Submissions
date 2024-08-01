class Solution {
public:
    int fastio = [] {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        return 0;
    }();
    int countSeniors(vector<string>& details) {
        int s = 0;
        for (int i = 0; i < details.size(); i++) {
            int age1 = details[i][11] - '0';
            int age2 = details[i][12] - '0';
            int age = (age1 * 10) + age2;

            if (age > 60) {
                s += 1;
            }
        }
        return s;
    }
};