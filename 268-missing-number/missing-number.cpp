class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start=0, end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            if(nums[mid]<=mid)
            start=mid+1;
            else
            end=mid-1;
        }
        return start;
    }
};