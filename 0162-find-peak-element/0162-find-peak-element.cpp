// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int l = 0;
//         int n = nums.size();
//         int h = n - 1;
//         int ans = -1;
//         if(n==1)return 0;
//         if(n==2 && nums[l]>nums[h])return l;
//         if(n==2 && nums[l]<nums[h])return h;
//         while (l < h) {
//             int m = l + (h - l) / 2;

//             if (nums[m] > nums[m - 1] && nums[m] > nums[m + 1])
//                 return m;   
//             else {
//                 l = m + 1;
//                 ans = m;
//             }
//             else{
//                 h=m-1;
//             } 
//         }

//         return ans;
//     }
// };
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return 0;

        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int l = 1;
        int h = n - 2;

        while(l <= h){
            int m = l + (h-l)/2;

            if(nums[m] > nums[m-1] && nums[m] > nums[m+1])
                return m;

            else if(nums[m] < nums[m+1])
                l = m + 1;

            else
                h = m - 1;
        }

        return -1;
    }
};