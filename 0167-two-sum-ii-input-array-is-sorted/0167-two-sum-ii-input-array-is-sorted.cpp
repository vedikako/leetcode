class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int h=numbers.size()-1;
        //if(arr[l]+arr[h]==target)return target;
        while(l<h){
            int result=numbers[l]+numbers[h];
           if(target==result)return {l+1,h+1};
           else if(target<result){
                h--;
            }else l++;
        }
        return {};
    }
};