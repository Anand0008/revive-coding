#include<bitset>
#include<string>
class Solution {
public:
    int reverseBits(int n) {
        string binn = bitset<32>(n).to_string();
        reverse(binn.begin(),binn.end());
        long long rev = stoi(binn,nullptr,2);
        return rev;

        
    }
};