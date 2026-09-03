class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int64_t product = 1;
        size_t size = nums.size();
        std::vector<int> solution = std::vector(size, 0);
        int zeros = 0, index = 0;

        for (size_t i = 0; i < size; i++) {
            if (!nums[i]) {
                zeros++;
                index = i;
                if (zeros >= 2)
                    return solution;
                continue;
            }
            product *= nums[i];
        }

        if (zeros) {
            solution[index] = product;
            return solution;
        }

        for (size_t i = 0; i < size; i++)
            solution[i] = product / nums[i];

        return solution;
    }
};
