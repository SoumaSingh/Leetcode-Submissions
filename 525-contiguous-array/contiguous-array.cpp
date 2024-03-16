class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int, int> map;
        map[0] = -1;
        int maxi = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count += (nums[i] == 1) ? 1 : -1;
            if (map.count(count)) {
                maxi = max(maxi, i - map[count]);
            } else {
                map[count] = i;
            }
        }
        return maxi; 
    }
};