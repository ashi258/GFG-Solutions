//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        vector<long long>dp(3,0);
        dp[0]=r[0];
        dp[1]=g[0];
        dp[2]=b[0];
        for(int i=1;i<N;i++){
            long long int red=dp[0];
            long long int  green=dp[1];
            long long int blue=dp[2];
            
            dp[0]=r[i]+min(green,blue);
            dp[1]=g[i]+min(red,blue);
            dp[2]=b[i]+min(green,red);
        }
        return min({dp[0],dp[1],dp[2]});
       
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int r[N],g[N],b[N];
        for(int i = 0; i < N; i++)
            cin >> r[i];
        for(int i = 0; i < N; i++)
            cin >> g[i];
        for(int i = 0; i < N; i++)
            cin >> b[i];
        
        Solution ob;
        cout << ob.distinctColoring(N, r, g, b) << endl;
    }
    return 0; 
}
// } Driver Code Ends