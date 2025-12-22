class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int temp = digits.size()-1;
        while (temp>=0){
            if (digits[temp]!=9){
                digits[temp]=digits[temp]+1;
                return digits;
            }
            else{
                digits[temp]=0;
                temp-=1;
            }
        
        
        }
        digits.insert(digits.begin(),1); 
        return digits;

        
    }
};