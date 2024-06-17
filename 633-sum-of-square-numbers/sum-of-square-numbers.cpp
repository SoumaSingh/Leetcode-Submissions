class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a=0, b=(long)sqrt(c);
       while(a<=b)
       {
        long res= a*a + b*b;
        if(res<c)
        {
            a++;
        }
        else if(res>c)
        {
            b--;
        }
        else {
        return true;
        }
       }

       return false;
    }
};