class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1; i<=n; i++) q.push(i);
        
        while(q.size() > 1) {
            int i = k;
            while(i > 1) {
                auto f = q.front(); q.pop();
                q.push(f);
                i--;
            }
            q.pop();
        }
        return q.front();
    }
};