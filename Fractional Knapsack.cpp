
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
  struct Data{
     double val;
     double wt;
     double  valperwt;
  };
  static bool cmp(Data a, Data b){
      return a.valperwt>b.valperwt;
  }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // Your code here
        int n=val.size();
        vector<Data>v;
        for(int i=0;i<n;i++){
            double perdata=(double)val[i]/(double)wt[i];
            v.push_back({(double)val[i],(double)wt[i],perdata});
        }
        sort(v.begin(),v.end(),cmp);
        double finalVal=0.0;
        for(int i=0;i<n;i++){
            if(capacity>=v[i].wt){
                finalVal+=v[i].val;
                capacity-=v[i].wt;
            }
            else{
                finalVal+=v[i].valperwt * double(capacity);
                break;
                
            }
        }
        
        return finalVal;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
