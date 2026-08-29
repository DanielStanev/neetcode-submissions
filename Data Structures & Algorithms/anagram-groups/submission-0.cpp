class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> mapping;
        
        for (const std::string & str : strs) {
            std::string gram = str;
            std::sort(gram.begin(), gram.end());
            mapping[gram].push_back(str);
        }

        std::vector<std::vector<std::string>> solution;

        for (const std::pair<std::string, std::vector<std::string>> & it : mapping) {
            solution.push_back(it.second);
        }
        
        return solution;
    }
};
