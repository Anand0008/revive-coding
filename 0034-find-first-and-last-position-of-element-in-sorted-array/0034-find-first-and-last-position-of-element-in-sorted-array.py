class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        start = 0
        end = len(nums)-1
        mid = start + ((end-start)//2)
        while (start<=end):
            if (nums[mid] == target):
                temp=mid
                s1 = mid
                s2 = mid
                while s1 > 0 and nums[mid-1]==target:
                    s1 = mid-1
                    mid=mid-1
                while s2 < len(nums) - 1 and nums[temp+1]==target:
                    s2=temp+1
                    temp=temp+1
                return [s1,s2]


            
            elif(nums[mid] < target):
                start = mid+1
            
            else:
                end = mid-1
            mid = start + ((end-start)//2)
        
        return [-1,-1]
        