//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(struct Item i1, struct Item  i2){
        double a = (double)i1.value/i1.weight;
        double b = (double)i2.value/i2.weight;
        
        return a>b;
    }
double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, comp);
        
        double max_pro=0;
        int cap=W, i=0;
        
        while(cap && i<n){
            if(arr[i].weight <= cap){
                max_pro+=arr[i].value;
                cap-=arr[i].weight;
            }
            else{
                max_pro += ((double)arr[i].value/arr[i].weight)*cap;
                break;
            }
            i++;
        }
        return max_pro;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends