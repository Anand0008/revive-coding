class Solution:
    def search(self, nums: List[int], target: int) -> int:
        start = 0
        end = len(nums)-1
        while (start<end):
            mid = start + (end-start)//2
            #1st branch
            if (nums[0]<=nums[mid]):
                start = mid +1
            else:
                end = mid
        #now start=end=mid is teh pivot value
        if (target >= nums[start] and target <= nums[len(nums)-1]) :
            s = start
            e = len(nums)-1
        else:
            s = 0
            e = start-1
        while (s<=e):
            m = s + (e-s)//2
            if (nums[m]==target):
                return m
            elif (nums[m]<target):
                s = m+1
            else:
                e = m-1
        return -1

        
        
    

                
            


        