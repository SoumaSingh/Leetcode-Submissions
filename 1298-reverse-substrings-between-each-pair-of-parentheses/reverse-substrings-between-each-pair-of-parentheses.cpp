class Solution {
public:
    int fastio = [] {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        return 0;
    }();
    string reverseParentheses(string s) {
        stack<int> p;
        string res;
        for (int i = 0; i < s.size(); ++i) {
            char curr = s[i];
            if (curr == '(') {
                p.push(res.size());
            } else if (curr == ')') {
                int a = p.top();
                p.pop();
                reverse(res.begin() + a, res.end());
            } else {
                res += curr;
            }
        }
        return res;
    }
};
