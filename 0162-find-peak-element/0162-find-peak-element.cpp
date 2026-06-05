class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        auto max_it = max_element(nums.begin(), nums.end());

    // 3. Calculate the index from the iterator
         int max_idx = distance(nums.begin(), max_it);
         return max_idx;
    }
};