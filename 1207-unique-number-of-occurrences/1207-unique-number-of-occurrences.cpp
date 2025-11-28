class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for (int val : arr){
            ++mp[val];
        }
        vector<int> ans_arr;
        for (const auto &p : mp){
            ans_arr.push_back(p.second);
        }
        sort(ans_arr.begin(),ans_arr.end());
        for(int i=0;i<ans_arr.size();i++){
            if (i+1<ans_arr.size() && ans_arr[i]==ans_arr[i+1]){
                return false;
            }

        }
        return true;

        
    }
};