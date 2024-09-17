class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> count;
        istringstream issA(A), issB(B);
        string word;

        while (issA >> word)
            count[word]++;
        while (issB >> word)
            count[word]++;

        vector<string> ans;
        for (const auto& kv : count)
            if (kv.second == 1)
                ans.push_back(kv.first);

        return ans;
    }
};
