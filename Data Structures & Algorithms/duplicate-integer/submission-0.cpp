class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> check;

        for (const int& i : nums) {
            if (check.contains(i))
                return true;
            else
                check.insert(i);
        }

        return false;
    }
};