class Solution:
    def maxDistance(self, nums1: List[int], nums2: List[int]) -> int:
        i=j=0
        maxi = 0
        while(i<len(nums1) and j<len(nums2)):
            if nums1[i]<=nums2[j]:
                maxi = max(maxi,j - i)
                
                j+=1
            else:
                i+=1
                j+=1
        while(j<len(nums2)):
            if i-1 <= j and nums1[i-1]<=nums2[j]:
                maxi = max(maxi,j - (i-1))
                
                j+=1
        return maxi

        