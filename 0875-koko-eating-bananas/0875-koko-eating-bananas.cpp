// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int k=1;
//         int n=piles.size();
//         while (true){
//             long hour=0;
//             for (int i=0;i<n;i++){
//                 hour+=((long)piles[i]/k);
//                 if (piles[i]%k!=0) hour++;
//             }
//             if (hour<=h)return k;
//             k++;
//         }
//     }
// };
//k value is between 1 to max(arr) so it is sorted and you can apply binary search 
//TLE as piles.length can be upto  10^9 
//for example1 1<=k<=11
//take l=1, h=11 m=6


class Solution {
public:
    long long calcTime(vector<int>& piles, int k) {
        int n = piles.size();
        long long hour = 0;

        for (int i = 0; i < n; i++) {
            hour += piles[i] / k;
            if (piles[i] % k != 0)
                hour++;
        }

        return hour;
    }

    int minEatingSpeed(vector<int>& piles, int maxTime) {
        int l = 1;
        int h = 0;
        int n = piles.size();

        for (int i = 0; i < n; i++) {
            h = max(h, piles[i]);
        }

        int ans = h;

        while (l <= h) {
            int k = l + (h - l) / 2;

            long long eatingTime = calcTime(piles, k);

            if (eatingTime <= maxTime) {
                ans = min(ans, k);
                h = k - 1;
            } else {
                l = k + 1;
            }
        }

        return ans;
    }
};