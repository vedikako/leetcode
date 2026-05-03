class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            int compare = target - nums[i];

            
            if (mpp.find(compare) != mpp.end()) {
                return {mpp[compare], i};
            }

            
            mpp[nums[i]] = i;
        }

        return {};
    }
};