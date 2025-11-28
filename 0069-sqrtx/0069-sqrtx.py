class Solution:
    def mySqrt(self, n: int) -> int:
        start = 0
        end = n
        ans  = -1
        while (start<=end):
            mid = start + (end - start)//2
            square =  mid*mid
            if (square == n):
                return mid
            elif(square < n):
                ans = mid
                start=mid+1
            else:
                end=mid-1
        return ans