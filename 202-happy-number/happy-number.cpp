class Solution {
public:

    int solve(int n){
        int a,s=0;
        while(n>0){
            a=n%10;
            s=s+(a*a);
            n=n/10;
        }
        return s;
    }

    bool isHappy(int n) {
        int slow=n, fast=n;
        do{
            slow=solve(slow);
            fast=solve(solve(fast));
            if(fast==1) return 1;
        }
        while(slow!=fast);
        return 0;
    }
};