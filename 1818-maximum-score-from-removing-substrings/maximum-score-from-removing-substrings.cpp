class Solution {
public:
    int fastio = [] {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        return 0;
    }();
    int maximumGain(string s, int x, int y) {
        int res = 0;
        if (x > y) {
            res += remove(s, "ab", x);
            res += remove(s, "ba", y);
        } else {
            res += remove(s, "ba", y);
            res += remove(s, "ab", x);
        }
        return res;
    }

    int remove(string& st, string target, int points) {
        int total = 0;
        int write = 0;

        for (int read = 0; read < st.size(); read++) {
            st[write++] = st[read];
            if (write > 1 && st[write - 2] == target[0] &&
                st[write - 1] == target[1]) {
                write -= 2;
                total += points;
            }
        }
        st.erase(st.begin() + write, st.end());
        return total;
    }
};