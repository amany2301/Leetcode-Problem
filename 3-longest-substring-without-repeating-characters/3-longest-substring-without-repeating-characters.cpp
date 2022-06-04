class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Sliding Window
        // Time Complexity : O(N)
        // Space Complexity: O(N), where N is the input string length
		
        // STEP 1: As we slide the window with the right pointer
        // increment the count on the character we encounter
        
        // STEP 2: If the counter of any character we encounter exceeds 1, 
        // we slide the left pointer and decrement the counter of the character 
        // on the left side of our window until the character count no longer exceeds one
        
        // STEP 3: We now have a valid window state, so check to see if our current
        // window length (r-l+1), is longer than the maximum window length found so far
        
        // Repeat STEPS 1-3 until the right pointer reaches the end of the string
        
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