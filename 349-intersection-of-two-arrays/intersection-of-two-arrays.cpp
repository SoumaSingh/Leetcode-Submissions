class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0, j=0;
        set<int> st;
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]>nums2[j]) j++;
            else {st.insert(nums2[j]);i++;j++;}
        }
        vector<int> vec(st.begin(), st.end());
        return vec;
    }
};