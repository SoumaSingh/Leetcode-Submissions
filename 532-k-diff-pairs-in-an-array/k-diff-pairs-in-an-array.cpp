class Solution {
    int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>m;
        for(auto it:nums)m[it]++; 
        int ans=0;
        for(auto it:m){
           int val=it.first+k;
           if(k!=0){if(m.find(val)!=m.end())ans++;}
           else {if((m.find(val)!=m.end())&&(m[val]>1))ans++;}
        }
        return ans;
    }
};