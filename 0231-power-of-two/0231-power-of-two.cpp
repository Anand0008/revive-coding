#include<cmath>
class Solution {
public:
    bool is_integer(double ans){
        return std::floor(ans) == ans;
    }

    bool isPowerOfTwo(int n) {
        if (n<=0) return false;
        if (n==1 || n==2) return true;
        double ans = log2(n);
        if (is_integer(ans)) return true;
        else return false;
        
    }
};