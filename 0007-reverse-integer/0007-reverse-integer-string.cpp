class Solution {
public:
    int reverse(int x) {
        long long z = x;
        bool neg = false;

        if (z < 0) {
            neg = true;
            z = -z;
        }

        string y = to_string(z);
        std::reverse(y.begin(), y.end());

        long long ans = stoll(y);

        if (neg) 
            ans = -ans;

        // final overflow check
        if (ans < INT_MIN || ans > INT_MAX) 
            return 0;

        return (int)ans;
    }
};