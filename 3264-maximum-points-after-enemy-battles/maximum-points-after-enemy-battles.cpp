class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    typedef long long ll;
    ll solve(vector<int>& enemyEnergies, int currentEnergy, int i, int j)
    {
        ll ans = 0;
        while(i <= j) 
        {
            if(enemyEnergies[i] > currentEnergy) 
            {
                if(ans == 0) 
                {
                    return 0;
                }
                while(currentEnergy < enemyEnergies[i]) 
                {
                     currentEnergy += enemyEnergies[j];
                     j--;
                }
            } 
            else 
            {
                ll incr = currentEnergy / enemyEnergies[i];
                currentEnergy = currentEnergy % enemyEnergies[i];
                ans += incr;
            }
        }
        return ans;
    }
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        ll n = enemyEnergies.size();
        sort(enemyEnergies.begin(), enemyEnergies.end());
        ll i = 0, j = n - 1;
        return solve(enemyEnergies, currentEnergy, i, j);
        
    }
};