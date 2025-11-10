class Solution:
    def baseNeg2(self, n: int) -> str:
        if n == 0 : return "0"
        base = -2
        ans = ""
        while(n!=0):
            rem = n % base 
            n = n // base  #dont use n = int(n/base)  5 // -2 = -3   (integer floor division) 5 / -2 = -2.5 int(-2.5) = -2   "// in Python rounds down toward −∞ but int() truncates toward 0"
            if (rem < 0):
                rem += 2
                n += 1
            ans += str(rem)
        ans = ans[::-1]
        return ans
