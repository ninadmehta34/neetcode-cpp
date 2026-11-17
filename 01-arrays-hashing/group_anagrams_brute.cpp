// Group Anagrams, Arrays & Hashing, Medium
// Pattern: sorted keys + visited array (brute force grouping)
// Time O(n^2 * k), Time Limit Exceeded on the large tests
// Tripped on: checking what words have been visited, paired group, logic however was right. 
//Even this approach needs to be revised.  

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        vector<string> sort_vec; 
        vector<vector<string>> result;

        for (int i = 0; i < size; i++) {
            string new_word = strs.at(i);
            sort(new_word.begin(),new_word.end()); 
            sort_vec.push_back(new_word); 
            
        }

        vector<bool> visited(strs.size(), false); 

        
        
        for (int i=0; i<sort_vec.size(); i++) {
            if (visited.at(i)==true) {
             continue; //continue if the word has already been grouped

            }
            vector<string> paired; // form a new group with a newly visited word.
            paired.push_back(strs.at(i)); //add the new word
            visited.at(i) = true; 


            for (int j=i+1; j<size; j++) {
                if (!visited.at(j) && sort_vec.at(i)==sort_vec.at(j)) { //here check other words with the added word
                    paired.push_back(strs.at(j)); //add to paired if similar
                    visited.at(j) = true; // now the paired word has also been added, hence visited.  
                } 
            }

            result.push_back(paired); //push this pair together in result
        }
        return result;

    }
};