class Solution:
    def baseNeg2(self, n: int) -> str:
        if n == 0 : return "0"
        base = -2
        ans = ""
        while(n!=0):
            rem = n % base
            n = n // base
            if (rem < 0):
                rem += 2
                n += 1
            ans += str(rem)
        ans = ans[::-1]
        return ans