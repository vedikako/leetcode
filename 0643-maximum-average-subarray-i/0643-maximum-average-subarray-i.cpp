class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum;
        sum=0;
        for(int i=0;i<k;i++){
            // double sum;
            // sum=0;
            sum+=nums[i];
        }
        double maxavg= sum/k;

        for(int i =k;i<nums.size();i++){
            sum+= nums[i]-nums[i-k];
            double newavg= sum/k;
            maxavg=max(maxavg,newavg);
        }
        return maxavg;
    }
};  