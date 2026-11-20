// Top K Frequent Elements, Arrays & Hashing, Medium
// Pattern: hash map (count), then sort (frequency, number) pairs descending, take first k
// Time O(n log n): counting is O(n), sorting the u unique values is O(u log u), u <= n
// Space O(n): map and pair vector each hold up to u entries
// Tripped on: syntax for unordered map (especially m.count), looping through map, paired array creation, "arr[j].second", 
// Also, left a debug cout loop in the submission which resulted in Output Limit Exceeded
// Next: need to try O(n) bucket sort.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for (int i = 0;i<nums.size(); i++) {
            int current_num = nums.at(i);
            if (m.count(current_num)) {  
                m[current_num] = m[current_num] +1;
            }
            else {
            m[current_num] = 1;
            }
        }
        vector <pair<int, int>> arr;
        for (auto& p : m) {
        arr.push_back({p.second, p.first});
        
    }
//    for (auto & item:arr) {
//        cout << "Freq: " << item.first << ", Num: " << item.second << endl;
//}
    sort(arr.rbegin(), arr.rend()); // rbegin(), rend() sorts by descending order
    // for a pair: 1) compare key, 2) compare value if key results in a tie 

    vector<int> result;
    for (int j = 0; j<k; j++) {
        result.push_back(arr[j].second); //
    }
    return result;

    }
};