//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string str;
        string temp;
        for(int i=0;i<S.length();i++){
            if(S[i]!='.'){
                temp= temp+S[i];
            }
            if(S[i]=='.'){
                temp = "."+temp;
                str = temp+str;
                temp="";
            }
            if(i==S.length()-1){
                str=temp+str;
            }
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends