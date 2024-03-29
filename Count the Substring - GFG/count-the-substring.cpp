//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:
  long long countSubstring(string S){
    // code here
     long long ans=0;

    unordered_map<long long,long long> help;

    vector<long long> dp(S.size(),0);

    long long sum=-1;

    if(S[0]=='1'){

         dp[0]=1;

         ans=1;

         sum=1;

    }

    help[sum]=0;

    help[0]=-1;

    for(int i=1;i<S.size();i++){

        long long temp=0;

        if(S[i]=='0')

            sum-=1;

        else

            sum+=1;

        if(S[i]=='0'){

            if(help.find(sum)!=help.end()){

                if(help[sum]!=-1){

                    temp+=dp[help[sum]];

                }

            }

        }else{

            if(help.find(sum)!=help.end()){

                if(help[sum]!=-1){

                    temp=temp+dp[help[sum]]+i-help[sum]-1;

                }else{

                    temp=temp+i-help[sum]-1;

                }

            }else{

                temp+=i+1;

            }

        }

        help[sum]=i;

        dp[i]=temp;

        ans+=temp;

    }

    return ans;
  }
};

//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends