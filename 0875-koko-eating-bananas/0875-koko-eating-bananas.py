class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        def canEatAll(speed):
            hours = 0
            for pile in piles:
                hours += (pile + speed - 1) // speed  # ceil(pile / speed)
            return hours <= h
        
        left, right = 1, max(piles)
        ans = right
        
        while left <= right:
            mid = (left + right) // 2
            if canEatAll(mid):
                ans = mid
                right = mid - 1
            else:
                left = mid + 1
        
        return ans
