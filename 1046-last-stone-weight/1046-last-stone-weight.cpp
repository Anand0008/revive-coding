#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end());

            int n = stones.size();
            int largest = stones[n - 1];
            int second_largest = stones[n - 2];

            
            stones.erase(stones.end() - 2, stones.end());

            if (largest != second_largest) {
                stones.push_back(largest - second_largest);
            }
        }

        return stones.empty() ? 0 : stones[0];
    }
};
