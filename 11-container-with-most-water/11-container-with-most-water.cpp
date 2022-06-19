class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l=0,r=height.size()-1;
        int ans=0;
        while(l<r)
        {
            int lh=height[l];
            int rh=height[r];
            int min_h=min(lh,rh);
            ans=max(abs(r-l)*min_h,ans);
            cout<<ans<<" ";
            if(lh<rh)
                l++;
            else
                r--;
        }
        return ans;
    }
};