class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        temp = len(digits) - 1
        while temp>=0:
            if digits[temp]!=9:
                digits[temp]=digits[temp]+1
                return digits
            else:
                digits[temp]=0
                temp-=1
        return [1]+digits



        