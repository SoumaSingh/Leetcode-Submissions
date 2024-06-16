class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(), coins.end());
        int count=1, i=0;
       for(i=0; i<coins.size(); i++)
       {
            if(coins[i]<=count){
                count+= coins[i];
            }
            else{
                return count;
            }
        }
        return count;
    }
};