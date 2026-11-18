// Group Anagrams, Arrays & Hashing, Medium
// Pattern: hash map, sorted word as the key -> vector of original words
// Time O(n * k log k), Space O(n * k)   (n = number of words, k = longest word)
// Tripped on: needed a lot of help. Brute force (sort + visited array + inner loop) gave
//   Time Limit Exceeded at O(n^2). Hard parts: seeing that the sorted word can be the key,
//   understanding unordered_map<string, vector<string>>, and looping over a map with p.first / p.second

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (int i = 0; i < strs.size(); i++) {
            string word = strs.at(i);
            string key = word;                  // copy of the word

            sort(key.begin(), key.end());       // key is now the label

            groups[key].push_back(word);
            
        }

        vector<vector<string>> result;

        
        //for (auto& p : groups) is one way to loop through unordered_map
        for (pair<string, vector<string>> p: groups) { //
            //this is the complete way to loop through unordered_map using type
            // you can also use &p for pointer instead of p
            //p.first is the label, p.second is the box.
            
            result.push_back(p.second); 
        }

        return result;
    }
};
