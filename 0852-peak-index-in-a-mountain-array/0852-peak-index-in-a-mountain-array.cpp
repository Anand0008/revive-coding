class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // still rising — peak is right
                start = mid + 1;
            } else {
                // peak is at mid or left
                end = mid;
            }
        }
        return start;   // start == end == peak index
    }
};
