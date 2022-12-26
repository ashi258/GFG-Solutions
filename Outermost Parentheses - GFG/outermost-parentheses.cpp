//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
         string str = "";
        int count=0;
        for(int i=0; i<s.length();i++){
            if(s[i]=='('){
                if(count!=0){
                    str+='(';
                }
                count++;
            }else{
                count--;
                if(count!=0){
                    str+=')';
                }
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends