class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mappingDictStoT(256, -1);
    vector<int> mappingDictTtoS(256, -1);
    
    for (int i = 0; i < s.size(); ++i) {
        char c1 = s[i];
        char c2 = t[i];
        
        if (mappingDictStoT[c1] == -1 && mappingDictTtoS[c2] == -1) {
            mappingDictStoT[c1] = c2;
            mappingDictTtoS[c2] = c1;
        }
        else if (!(mappingDictStoT[c1] == c2 && mappingDictTtoS[c2] == c1)) {
            return false;
        }
    }
    return true;
    }
};