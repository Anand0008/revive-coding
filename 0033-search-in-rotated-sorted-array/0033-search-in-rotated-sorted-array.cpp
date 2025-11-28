class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        // Step 1: Find pivot (index of smallest element)
        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[0] <= nums[mid]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        int pivot = start;

        // Step 2: Choose which half to search
        int s, e;

        if (target >= nums[pivot] && target <= nums[nums.size() - 1]) {
            s = pivot;
            e = nums.size() - 1;
        } else {
            s = 0;
            e = pivot - 1;
        }

        // Step 3: Normal binary search
        while (s <= e) {
            int m = s + (e - s) / 2;

            if (nums[m] == target) {
                return m;
            }
            if (target < nums[m]) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }

        return -1;
    }
};
