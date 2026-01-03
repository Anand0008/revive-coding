class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) > 1:
            stones.sort()

            largest = stones[-1]
            second_largest = stones[-2]

            stones = stones[:-2]

            if largest != second_largest:
                stones.append(largest - second_largest)

        return stones[0] if stones else 0
