//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int first, last;
        if(x < arr[0] || x > arr[n-1]) return 0;  //if x not present in array
        
        //finding first index of x in array
        int low = 0, high = n - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(arr[mid] < x) low = mid + 1;
            else high = mid - 1;
        }
        if(arr[low] != x) return 0;  // if x not present in array
        first = low;
        
        
        //finding last index of x in array
        low = 0, high = n - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(arr[mid] <= x) low = mid + 1;
            else high = mid - 1;
        }
        last = high;
        
        //number of occurance of x is "last - first + 1"
        return last - first + 1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends