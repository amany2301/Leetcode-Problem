class Solution {
public:
    int reverse(int x) {
        long long int y = 0;
        
        while(x)
        {
            y = (x % 10)  + y*10;
            x /= 10;
            if(y > INT_MAX || y < INT_MIN )
                return 0;
        }
        
        return int(y);
    }
};