class Solution {
public:
    bool isPalindrome(int x) {
        long long sum = 0, r;
    long long z;
    z=x;
    while(x>0){
        r = x%10;
        sum = (sum*10) +r;
        x = x/10;

    }
    if(z==sum){
        return true;
    }
    else{
        return false;
    }
    
        
    }
};