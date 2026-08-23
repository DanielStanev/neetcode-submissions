class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> s_chars;

        if (s.size() != t.size())
            return false;

        for (const char & x : s) {
            s_chars[x]++;
        }

        for (const char & x : t) {
            s_chars[x]--;
            if (s_chars[x] < 0)
                return false;
        }

        return true;
    }
};
