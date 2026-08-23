class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::vector<char> prefix;
        
        std::sort(strs.begin(), strs.end(), [](const std::string& a, const std::string& b) {
            return a.size() < b.size();
        });

        size_t len = strs[0].size();

        for (size_t i = 0; i < len; i++) {
            char x = strs[0][i];

            for (const std::string &str : strs)
                if (str[i] != x)
                    return std::string(prefix.begin(), prefix.end());

            prefix.push_back(x);
        }
        

        return std::string(prefix.begin(), prefix.end());
    }
};