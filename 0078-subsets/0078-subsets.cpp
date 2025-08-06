class Solution {
public:

    void powerset (vector<int> nums,vector < int >  output ,
        int index, vector < vector < int > > & ans) {

            if ( index  >= nums.size()){
                ans.push_back(output);
                return;
            }

            powerset(nums,output,index+1,ans);

            int element = nums[index];
            output.push_back(element);
            powerset(nums, output,index+1, ans);

        


    }



    vector<vector<int>> subsets(vector<int>& nums) {
        vector < vector < int > > ans;
        vector < int > output ;
        int index = 0;
        powerset (nums, output, index, ans);
        return ans;
        


        
    }
};