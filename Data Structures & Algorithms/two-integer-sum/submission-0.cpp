class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> beans;

        int len = nums.size();

        for (int i = 0; i < len; i++) {
            int c = target - nums[i];
            if (beans.contains(c))
                return {beans[c], i};

            beans[nums[i]] = i;
        }

        return {0, 0};
    }
};
