class Solution:
    def reverse(self, x: int) -> int:
        neg=False
        if x<0:
            neg=True
            x=abs(x)
        y = str(x)
        y=y[::-1]
        ans = int(y)
        
        if neg: ans = -ans
        if ((ans < -2**31) or (ans > 2**31-1)): return 0
        else: return ans
        

        