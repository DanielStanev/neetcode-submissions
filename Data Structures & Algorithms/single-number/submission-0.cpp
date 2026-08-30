class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int solution = 0;

        for (const int& n : nums)
            solution ^= n;

        return solution;
    }
};
