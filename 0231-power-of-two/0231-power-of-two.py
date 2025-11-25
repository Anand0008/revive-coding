import math
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n<=0: return False
        if n==1 or n==2: return True
        ans  = log2(n)
        if ans.is_integer(): return True
        else: return False
        