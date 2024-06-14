class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int moves=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            int prev=nums[i-1];
            if(nums[i]<=prev)
            {
                int curr=nums[i];
                nums[i]=prev+1;
                moves+=nums[i]-curr;
                prev=nums[i];
            }
        }
        return moves;
    }
};