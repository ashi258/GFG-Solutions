//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
       
    // Concatination of s1 Strings.. and storing them in a "temp" string..
        string temp = s1 + s1;
        
        // Logic for Rotation of string s2
        if(s1.length() == s2.length() && temp.find(s2) != -1){
            return true;
        }
        else
            return false;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends