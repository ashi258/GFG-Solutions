//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        int s=0;
        int e=N-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(A[mid]==Key)
                return 1;
            if(A[mid]==A[s] && A[mid]==A[e])
                s++,e--;
            else if(A[s]<=A[mid]){
                if(A[s]<=Key && Key<=A[mid])
                    e=mid-1;
                else
                    s=mid+1;
            }
            else{
                if(A[mid]<=Key && A[e]>=Key)
                    s=mid+1;
                else
                    e=mid-1;
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends