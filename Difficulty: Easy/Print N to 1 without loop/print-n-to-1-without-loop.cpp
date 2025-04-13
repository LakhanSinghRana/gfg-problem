//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void print(int n,int i){
        if(i==n){
            cout<<i<<" ";
            return;
        }
        print(n,i+1);
        cout<<i<<" ";
    }
    void printNos(int N) {
        // code here
        print(N,1);
    }
};


//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends