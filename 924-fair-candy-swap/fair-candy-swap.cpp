class Solution {
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int bs(vector <int>& A, int target){

        int l = 0;
        int p = A.size()-1;
        int s;
        while(l<p){
            s = (l+p)/2;
            if(A[s] < target){
                l = s+1;
            }else{
                p=s;
            }
        }
        return l;
    }
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        int sumA = 0;
        int sumB = 0;
        for(int i = 0; i < aliceSizes.size(); i++){
            sumA += aliceSizes[i];
        }
        for(int i = 0; i < bobSizes.size(); i++){
            sumB += bobSizes[i];
        }
        int diff = sumA-sumB;
        vector<int> res;
        sort(bobSizes.begin(), bobSizes.end());
        for(int i = 0; i<aliceSizes.size(); i++){
            int bob = bs(bobSizes, aliceSizes[i]-(diff)/2);
            if(bobSizes[bob] ==  (aliceSizes[i]-(diff)/2)){
                res.push_back(aliceSizes[i]);
                res.push_back(bobSizes[bob]);
                break;
            }
        }
        return res;
    }
};