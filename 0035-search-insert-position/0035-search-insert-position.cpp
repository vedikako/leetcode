class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(target<nums[0])return 0;
        if(target>nums[n-1])return n;
        int l=0;
        int h=n-1;
        while(l<h){
            int m=l+(h-l)/2;
            if(target>nums[m]){
                l=m+1;
            }
            else{
                h=m;
            }
        // return m;   
        }
        return l;
    }
};