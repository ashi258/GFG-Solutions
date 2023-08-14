//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xorans=0;
       int n=nums.size();
       vector<int> v;
       for(int i=0;i<n;i++)
       {
           xorans=xorans^nums[i];
       }
       // Right most bit 
       xorans=xorans & ~(xorans-1);
       int set1=0;
       int set2=0;
       for(int i=0;i<n;i++)
       {
           if(xorans & nums[i])
           {
               set1=set1^nums[i];
           }
           else
           {
               set2=set2^nums[i];
           }
       }
       
       v.push_back(set1);
       v.push_back(set2);
       sort(v.begin(),v.end());
       return v;
    
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends