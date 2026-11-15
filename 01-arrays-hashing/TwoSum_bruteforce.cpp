// Two Sum, Arrays & Hashing, Easy
// Pattern: brute force (check every pair)
// Time O(n^2)
// Tripped on: syntax (if-condition parentheses, .at() vs [], returning {i, j})

#include <string>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++) {
            for (int j=i+1;j<nums.size();j++) {
                if ((i!=j) && (nums.at(i)+nums.at(j) == target)) {
                    return {i,j};
                }
            }
        }
        
    }
};
