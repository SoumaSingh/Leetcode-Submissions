class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int numberOfSubarrays(vector<int>& nums, int k) {
        int totalCount = 0;
        int currentSum = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;
            }
            else
            {
                nums[i]=1;
            }
        }
        unordered_map<int, int> freq; 

        for (int num : nums) {
            currentSum += num;
            if (currentSum == k){
                totalCount++;
            }
            if (freq.find(currentSum - k) != freq.end()){
                totalCount += freq[currentSum - k];
            }
            freq[currentSum]++;
        }
        return totalCount; 
    }
};