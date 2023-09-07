class Solution {
    int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>maxi){
            maxi=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};