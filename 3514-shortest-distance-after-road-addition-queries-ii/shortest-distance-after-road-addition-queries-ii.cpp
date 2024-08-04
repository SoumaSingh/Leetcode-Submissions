class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& q) {
        vector<int> d(n, 0);
        for (int i = 1; i < n; ++i) {
            d[i] = d[i - 1] + 1;
        }

        set<int> p;
        for (int i = 0; i < n; ++i) {
            p.insert(i);
        }

        vector<int> r;

        for (const auto& qi : q) {
            int l = qi[0];
            int rt = qi[1];

            auto lb = p.lower_bound(l + 1);
            auto ub = p.lower_bound(rt);

            p.erase(lb, ub);

            r.push_back(p.size() - 1);
        }

        return r;
    }
};