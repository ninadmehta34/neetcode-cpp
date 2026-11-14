// Contains Duplicate, Arrays & Hashing, Level: Easy
// Pattern: brute force For each element i, we compare it against every element after it (j = i + 1). 
// Time O(n^2) - Outer loop runs n times (and for each of those, inner loop runs n times), Space O(1)
// Tripped on: Nothing. solved it completely

#include <vector>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i=0; i < nums.size(); i++) {
            for (int j=i+1; j < nums.size(); j++) {
                if (nums.at(i) == nums.at(j)) {
                    return true;
                }
                }
                
            }
            return false;
        }
        
    };