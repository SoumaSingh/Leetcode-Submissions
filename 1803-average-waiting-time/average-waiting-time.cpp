class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    double averageWaitingTime(vector<vector<int>>& customers) {
        int sum=0;
        long long net=0;
        for(int i=0;i<customers.size();i++){
            sum=max(sum,customers[i][0]);
            sum+=customers[i][1];
            net+=sum-customers[i][0];
            
        }
        double time=static_cast<double>(net)/customers.size();
        return time;
    }
};