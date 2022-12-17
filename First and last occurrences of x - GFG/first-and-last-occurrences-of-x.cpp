//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int s = 0;
    int e = n-1;
    int mid;
    vector<int> v;
    v.push_back(-1);
    v.push_back(-1);
    while (s<=e){
        mid = s+(e-s)/2;
        if(arr[mid]==x){
            s= mid;
            e= mid;
            while(s<n && arr[s]==x)
            s++;
            while(e>=0 && arr[e]==x)
            e--;
            v[0]=e+1;
            v[1]= s-1;
           
        }
        else if(arr[mid]>x){
            e = mid-1;
        }
            else
            s =mid+1;
    }
    return v;
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends