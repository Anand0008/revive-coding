from collections import defaultdict
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        hashmap= defaultdict(int)
        for i in arr:
            hashmap[i]+=1
        arr1 = list(hashmap.values())
        arr1.sort()
        for i in range(len(arr1)):
            if (((i+1)<(len(arr1))) and arr1[i]==arr1[i+1]):
                return False
        return True
        
        
        