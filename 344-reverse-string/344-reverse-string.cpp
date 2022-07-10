class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int l=0,e=s.size()-1;
        while(l<e)
        {
            swap(s[l],s[e]);
            l++;
            e--;
        }
         return;
    }
   
};