/*
class Solution {
public:
   int Memo(int n, vector<int>&dp){
        if(n<=1) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = Memo(n-1,dp) + Memo(n-2,dp);
    }
    int fib(int n) {
       vector<int>dp(n+1,-1);
        return Memo(n,dp);
    }
};

// alternative solution :
/*
class Solution {
public:
    int fib(int n) {
        vector<int> f(31,-1);
        f[0] = 0;
        f[1] = 1;
        for(int i = 2; i <= n; ++i){
            f[i] = f[i-1] + f[i-2];
        }
        return f[n];
    }
};
*/
class Solution {
public:
    int fib(int n) 
    {
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
    }
};
