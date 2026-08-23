class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;

        for (const int & i : nums)
            if (!seen.insert(i).second)
                return true;

        return false; 
    }
};