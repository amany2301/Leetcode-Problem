class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
        
        int N=s.length(); // string length
        int l=0, r=0; // sliding window pointers
        int maxLen=0; // maximum window length found
        vector<int> map(1000, 0); // map in array form for O(1) access time
        
        // O(N) - Iterating through entire length of string
        while( r<N)
        {
            ++map[s[r]];
            while( map[s[r]] > 1)
            {
                --map[s[l]];
                ++l;
            }
            int curLen = r-l+1;
            if( curLen > maxLen)
            {
                maxLen = curLen;
            }
            ++r;
        }
        return maxLen;
    }
};