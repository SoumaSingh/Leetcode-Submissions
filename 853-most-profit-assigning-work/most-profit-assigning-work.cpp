class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>profile;
        profile.push_back({0,0});
        for(int i=0;i<difficulty.size();i++)
        {
            profile.push_back({difficulty[i],profit[i]});
        }
        sort(profile.begin(),profile.end());
        for(int i=0;i<profile.size()-1;i++)
        {
            profile[i+1].second=max(profile[i].second,profile[i+1].second);
        }
        int netprofit=0;
        for(int i=0;i<worker.size();i++)
        {
            int ability=worker[i];
            int l=0,r=profile.size()-1, jobprofit=0;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(profile[mid].first<=ability)
                {
                    jobprofit=max(jobprofit,profile[mid].second);
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            netprofit+=jobprofit;
        }
        return netprofit;
    }
};