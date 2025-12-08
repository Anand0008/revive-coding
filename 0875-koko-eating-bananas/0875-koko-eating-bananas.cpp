class Solution {
public:
    bool canEat(vector<int>& piles, int speed, int h) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + speed - 1) / speed;   // ceil(pile / speed)
            if (hours > h) return false;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (canEat(piles, mid, h)) {
                ans = mid;         // mid works, try slower speed
                right = mid - 1;
            } else {
                left = mid + 1;    // mid too slow
            }
        }
        return ans;
    }
};
