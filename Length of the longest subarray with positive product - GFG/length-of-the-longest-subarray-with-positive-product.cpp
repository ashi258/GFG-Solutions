//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
           int maxLen = 0;
            int negCount = 0;
            int prevZero = -1;
            int firstNeg = -1;
            for (int i = 0; i < n; i++)
            {
                // negative value
                if (arr[i] < 0)
                {
                    negCount++;
                    if (firstNeg == -1)
                    {
                        firstNeg = i;
                    }
                }
                // zero -> so fresh start
                if (arr[i] == 0)
                {
                    firstNeg = -1;
                    negCount = 0;
                    prevZero = i;
                }
                //common step for both positive and negative values
                else 
                {
                    if (negCount % 2 == 0)
                    {
                        maxLen = max(maxLen,i - prevZero);
                    }
                    else 
                    {
                        maxLen = max(maxLen,i - firstNeg);
                    }
                }
            }
            return maxLen;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends