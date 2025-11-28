class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans =[]
        nums.sort()
        for i in range(len(nums)):
            if i+1<len(nums) and nums[i]==nums[i+1]:
                ans.append(nums[i])
            i+=1
        return ans