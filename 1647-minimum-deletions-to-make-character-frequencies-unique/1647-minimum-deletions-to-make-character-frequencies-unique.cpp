class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26,0);
        int i, ans = 0;
        unordered_set<int>st;
        
        //fill the frequency array
        for(i=0; i<s.length(); i++){
            freq[s[i] - 'a']++;
        }
        
        //sort in descending order
         sort(freq.rbegin(), freq.rend());
        for(auto it: freq)
        {
            cout<<it<<" ";
        
        }
        
        //counting duplicate frequencies in ans
        for(i=0; i<freq.size(); i++)
        {
            if(freq[i]==0)
                    break;
            if(st.find(freq[i])==st.end())
            {
                st.insert(freq[i]);   
            }
            else
            {
                while(st.find(freq[i])!=st.end() and freq[i])
                { 
                    freq[i]--;
                    ans++;
                }
                    st.insert(freq[i]);
                    
            }
        }
        return ans;
    }
};