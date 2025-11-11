#include <string>
#include <algorithm>
class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindrome by default
        if (x < 0) return false; 
        
        string s = to_string(x);
        string rev = s;          // make a copy
        reverse(rev.begin(), rev.end()); // reverse the copy
        
        return s == rev; // directly compare strings
    }
};