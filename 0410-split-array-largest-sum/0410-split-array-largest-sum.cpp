class Solution {
private:
    bool isPossible(vector<int>& nums, int k, int mid){
        int SumSub = 0;
        int numberofelements = 1;

        for (int i:nums){
            if (i > mid){
                return false;
            }
            if(SumSub + i <= mid){
                SumSub+=i;
            }
            else{
                numberofelements+=1;
                if (numberofelements>k || SumSub > mid){
                    return false;
                }
                SumSub = i;
                
            }
        }
        return true;


    }
public:
    int splitArray(vector<int>& nums, int k) {
        int tsum = 0;
        int max_arr = 0;
        for(int i : nums){
            tsum += i;
            max_arr = max(max_arr,i);
        }
        int start = max_arr;
        int end = tsum;
        int ans = -1;
        while (start <= end){
            int mid = start + (end-start)/2;
            if (isPossible(nums,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;

        
    }
};