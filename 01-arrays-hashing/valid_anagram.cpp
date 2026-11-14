// Valid Anagram | Arrays & Hashing | Easy
// Pattern: sorting
// Time O(n log n), Space O(n)
// Tripped on: was trying to use the complicated "break the string into pieces and compare char-by-char" instead of sorting.

#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

      return s==t;  
    }
};