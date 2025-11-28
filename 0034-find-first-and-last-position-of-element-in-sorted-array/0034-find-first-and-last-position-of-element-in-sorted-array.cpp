class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        while (start<=end){
            if (nums[mid]==target){
                int s1 = mid, s2 = mid, temp = mid;

                while (s1>0 && nums[mid-1]==target){
                    s1 = mid-1;
                    mid = mid -1;

                }
                while (s2<nums.size()-1 && nums[temp+1]==target){
                    s2=temp+1;
                    temp+=1;
                }
                return {s1,s2};
            }
            else{
                if (nums[mid] < target){
                    start=mid+1;
                }
                else{
                    end = mid-1;
                }
            }
            mid = start + (end-start)/2;

            }
        return {-1,-1};
        }
    
        
    
};