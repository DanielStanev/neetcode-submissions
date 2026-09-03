class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> solution;
        std::unordered_map<int,int> counts;
        std::vector<std::vector<int>> buckets(nums.size() + 1);  

        for (const int &i : nums) {
            counts[i]++;
        }

        for (const std::pair<int,int> &it : counts) {
            buckets[it.second].push_back(it.first);
        }

        size_t i = buckets.size() - 1;
        while(k) {
            if (buckets[i].empty()) {
                i--; continue;
            }

            k -= buckets[i].size();
            for (const int& x :buckets[i])
                solution.push_back(x);
            i--;
        }

        return solution;
    }
};
