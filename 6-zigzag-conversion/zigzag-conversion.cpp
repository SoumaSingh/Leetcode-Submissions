class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    string convert(string s, int numRows) {
        if (numRows <= 1) {
            return s;
        }
        vector<string> list(numRows, "");
        int currentLine = 0;
        bool reachedEdge = true;

        for (int i = 0; i < s.length(); ++i) {
            if (currentLine == 0 || currentLine == numRows - 1) {
                reachedEdge = !reachedEdge;
            }
            list.at(currentLine) += s.at(i);
            if (!reachedEdge) {
                currentLine++;
            } else {
                currentLine--;
            }
        }

        string result;
        for (int i = 0; i < numRows; ++i) {
            result += list.at(i);
        }
        return result;
    }
};