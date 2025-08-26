class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3] = {0, 0, 0};
        
        // Step 1: Count frequencies
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }
        
        // Step 2: Overwrite nums using count
        int k = 0;  // index in nums where we start writing
        for (int i = 0; i < 3; i++) {          // for each number (0,1,2)
            for (int j = 0; j < count[i]; j++) {  // repeat count[i] times
                nums[k] = i;
                k++;
            }
        }
    }
};
