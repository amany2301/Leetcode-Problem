class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int start = 0;
        int len = 0;
        for(int i = 0 ; i < s.size() ; ++i){
            if(mp.find(s[i]) != mp.end()){
                int x = mp[s[i]] + 1;
                start = max(start,x);
            }
            len = max(len,i-start+1);
            mp[s[i]] = i;
        }
        return len == 0 ? s.size() : len;
    }
};