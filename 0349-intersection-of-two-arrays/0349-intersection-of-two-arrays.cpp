#include<vector>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> nu1;
        set<int> nu2;
        for (int val : nums1){
            nu1.insert(val);

        }
        for (int val : nums2){
            nu2.insert(val);

        }
        vector<int> ans;
        set_intersection(nu1.begin(),nu1.end(),
                            nu2.begin(),nu2.end(),
                            back_inserter(ans));
        return ans;
        


        
        
        
    }
};