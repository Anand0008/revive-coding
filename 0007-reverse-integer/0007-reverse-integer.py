class Solution:
    def reverse(self, x: int) -> int:
        neg = 0
        if x<0:
            neg=1
            x=abs(x)
        ans =0
        while(x!=0):
            temp=x%10
            if (ans <(-2**31//10) or ans > ((2**31-1)//10)): return 0
            ans = ans *10 + temp
            x = x//10
        if neg:
            return 0-ans
        else: return ans
        