//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
      vector<char>ans,temp;

        string s = "";

        for(int i=0;i<n;i++){

            if(str[i]>='A' and str[i]<='Z'){

                temp.push_back(str[i]);

            }

            else{

                ans.push_back(str[i]);

            }

        }

        int k=0,j=0;

        sort(begin(temp),end(temp));

        sort(begin(ans),end(ans));

        for(int i=0;i<n;i++){

            if(str[i]>='A' and str[i]<='Z'){

                s+=temp[j];

                j++;

            }

            else{

                s+=ans[k];

                k++;

                

            }

        }

        return  s;

    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends