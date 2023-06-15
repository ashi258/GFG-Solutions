//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
         string str="";
        int n=S.length();
        
        //iterate over the string
        for(int i=0;i<n;i++){
            
            //initialize two pointer
            int left=i, right=i;
            
            
            // expand the range of palindrome,
            // while two pointers are same 
            
            while(left>=0 && S[left]==S[i])left--;
            while(right<n && S[right]==S[i])right++;
            
            // expand the range of palindrome,
            // while two pointers are same 
            
            while(left>=0 && right<n && S[left]==S[right]){
                left--;
                right++;
            }
            
            // get the substring that is palindrome
            string candidate = S.substr(left+1, right-left-1);
            // now check,
            // if current palindrome is longer than the previous one
            if(candidate.length()>str.length()){
                str=candidate;
            }
        }
        return str;
    
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends