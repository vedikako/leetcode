class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int comp = target - num;
            if (mpp.find(comp) != mpp.end()) {
                return {mpp[comp], i};
            }
            mpp[num] = i; 
        }
        return {}; 
    }
};