class Solution {
public:
    int addDigits(int num) {
        int a = 0, s = 0;
        while (num > 0) {
            a = num % 10;
            s += a;
            num = num / 10;
        }

        if (s < 10)
            return s;
        else
            return addDigits(s);
    }
};