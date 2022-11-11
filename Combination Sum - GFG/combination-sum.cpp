//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
   void solve(vector<int> &arr, int index, int n, int sum, vector<vector<int>> &ans, vector<int> temp){

        if(sum == 0){
            ans.push_back(temp);
            return;
        }
        if(index >= n || sum < 0){
            return;
        }
        if(arr[index] <= sum){
            temp.push_back(arr[index]);
            solve(arr,index,n,sum-arr[index],ans,temp);
            temp.pop_back();
            solve(arr,index+1,n,sum,ans,temp);
        }
        else{
            solve(arr,index+1,n,sum,ans,temp);
        }
    }
    
    
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        set<int> s;
        for(auto x:A){
            s.insert(x);
        }
        vector<int> arr;
        for(auto x:s){
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(arr, 0, arr.size() , B, ans, temp);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends