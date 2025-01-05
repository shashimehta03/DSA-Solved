//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity.
    int solve(int capacity, vector<int> &val, vector<int> &wt,int n){
        if(capacity==0 || n==0) return 0;
        if(wt[n-1]>capacity){
            return solve(capacity,val,wt,n-1);
        }
        return max(
            val[n-1]+solve(capacity-wt[n-1],val,wt,n-1),
            solve(capacity,val,wt,n-1)
            );
    }
    int dpSolve(int capacity, vector<int> &val, vector<int> &wt,int n){
        vector<vector<int>>dp(n+1,vector<int>(capacity+1,0));
        for(int i=1;i<=n;i++){
            for(int j=0;j<=capacity;j++){
                if(wt[i-1]<=j){
                    dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
                }
                else{
                dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][capacity];
    }
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        // code here
        return dpSolve(capacity,val,wt,wt.size());
        return solve(capacity,val,wt,wt.size());
    }
};

//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
