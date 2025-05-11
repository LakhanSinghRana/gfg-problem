//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> q;
        int n=arr.size();
        // k=k%n;
        for(int i=0;i<arr.size();i++){
            int sum=arr[i];
            q.push(sum);
            for(int j=i+1;j<arr.size();j++){
                sum+=arr[j];
                q.push(sum);
                if(q.size()>k) q.pop();
            }
            if(q.size()>k) q.pop(); 
        }
        
        // if(q.top()<0) return q.top();
        
        return q.top();
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.kthLargest(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends