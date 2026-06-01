class Solution {
public:

    // memoisation code
    int mem(int i, vector<int>& dp) {
        if (i == 0 || i == 1)
            return i;

        if (dp[i] != -1)
            return dp[i];

        return dp[i] = mem(i - 1, dp) + mem(i - 2, dp);
    }

    int fib(int n) {
        // return rec(n);

        vector<int> dp(n + 1);

        for (int i = 0; i <= n; i++) {
            dp[i] = -1;
        }

        return mem(n, dp);
    }
};