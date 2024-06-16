class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int minPatches(vector<int>& nums, int n) {
        long miss=1, add=0, i=0;
        while(miss<=n)
        {
            if(i<nums.size() && nums[i]<=miss)
            {
                miss+=nums[i++];
            }
            else
            {
                miss+=miss;
                add++;
            }
        }
        return add;
    }
};