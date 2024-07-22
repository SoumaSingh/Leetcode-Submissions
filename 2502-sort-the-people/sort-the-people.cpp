class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> mp;
        for (int i = 0; i < names.size(); i++) {
        mp.push_back({heights[i], names[i]});
    }
    sort(mp.rbegin(),mp.rend());

    vector<string> res;
    for (auto a : mp) {
        res.push_back(a.second);
    }
    return res;

    }
};