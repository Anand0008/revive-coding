#include <string>
#include <algorithm>
class Solution {
public:
    string baseNeg2(int n) {
        if (n==0) return "0";
        int base = -2;
        string ans;
        while (n!=0){
            int rem = n % base;
            n = n / base;
            if (rem < 0){
                
                rem = rem + 2;
                n += 1;
            }
            
            ans += to_string(rem);
     
        }
            cout<<ans;
            reverse(ans.begin(),ans.end());
            return ans;

    }

};