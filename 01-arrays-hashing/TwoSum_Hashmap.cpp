// Two Sum, Arrays & Hashing, Easy
// Pattern: hash map (value -> index), look up target: nums[i] before storing nums[i]
// Time O(n), Space O(n)
// Tripped on: understood m(count) and hash map value basics but messed up while returning the right values: "return {m[need],i]}" after if condn
//also, need to return the value m[nums.at(i)] = i; for it to remember this. 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> m;
        for (int i=0;i<nums.size();i++) {
            int need = target - nums.at(i);

            if (m.count(need)) { //return 0 or 1
                
            return {m[need], i};// m[need] is the earlier index
            }
            m[nums.at(i)] = i;  // not found, so remember this number
            
        }

    }
};