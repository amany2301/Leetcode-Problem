class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int s = nums.size();
        int t_sum = (s*(s+1))/2;
        int temp=0;
        for(int i=0;i<s;i++)
        {
            temp+=nums[i];
        }
        int ans= t_sum-temp;
           
     return ans;   
    }
};