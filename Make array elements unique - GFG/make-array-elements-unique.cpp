//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        sort(arr.begin(), arr.end());
        long long int increment = 0;
        map<int, int> m;
        for(int i = 0; i<arr.size(); i++) {
            m[arr[i]]++;
        }
        for(int i = 0; i<N-1; i++) {
            if(arr[i] == arr[i+1]) {
                int j = 1;
                while(m.find(arr[i]+j) != m.end()) {
                    j++;
                }
                increment += j;
                m[arr[i]+j]++;
            }
        }
        return increment;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends