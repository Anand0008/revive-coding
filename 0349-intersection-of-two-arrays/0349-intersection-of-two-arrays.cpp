class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        int i=0;
        int j=0;
        for (i=0;i<nums1.size();i++) {
            for (j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.insert(nums1[i]);
                
            }
            
                


        }
        }
        vector<int> finale;
        for (int val:ans){
            finale.push_back(val);
        }
        return finale;
        
        
    }
};