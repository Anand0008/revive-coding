class Solution:
    def isPossible(self, nums: List[int], k: int, mid: int) -> bool:
        subArrSum = 0
        numberOfElements = 1

        for x in nums:
            # If single element is bigger than mid, splitting not possible
            if x > mid:
                return False

            if subArrSum + x <= mid:
                subArrSum += x
            else:
                numberOfElements += 1
                if numberOfElements > k:
                    return False
                subArrSum = x  # FIXED: lowercase correct variable name
        
        return True

    def splitArray(self, nums: List[int], k: int) -> int:
        s = max(nums)  # optimization
        e = sum(nums)
        ans = -1

        while s <= e:
            mid = s + (e - s) // 2
            if self.isPossible(nums, k, mid):  # FIXED: call properly
                ans = mid
                e = mid - 1
            else:
                s = mid + 1
        return ans
