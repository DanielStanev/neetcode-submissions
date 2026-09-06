class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::set<int> n_set(nums.begin(), nums.end());
        int max = 0;

        for (const int& i : nums) {
            if (n_set.contains(i - 1))
                continue;

            int x = i, c = 0;
            while (n_set.contains(x++))
                c++;
            max = c > max ? c : max;
        }

        return max;
    }
};
