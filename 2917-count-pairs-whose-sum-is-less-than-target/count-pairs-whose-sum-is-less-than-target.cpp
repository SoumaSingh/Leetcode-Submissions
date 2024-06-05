class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
       sort(nums.begin(), nums.end());
       int count=0;
       for(int i=0;i<=nums.size();i++)
       {
        int left=i+1;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[i]+nums[mid]<target)
            {
                count+=mid-left+1;
                left=mid+1;
            }
            else {
                right=mid-1;
            }
        }
       }
       return count;
    }
};