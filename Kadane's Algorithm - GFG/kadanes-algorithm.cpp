// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    long long maxSubarraySum(int arr[], int n)
    {
        int max_value=0;
        int max_sum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            max_value=max(max_value + arr[i],arr[i]);
            
            max_sum=max(max_value,max_sum);
        }
        return max_sum;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends