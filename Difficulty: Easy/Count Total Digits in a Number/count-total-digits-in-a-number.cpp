//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    // Complete this function
    int countDigits(int n) {
        // Your code here
        int temp=n;
        int count=0;
        while(temp>0){
            count++;
            // temp=temp%10;
            temp=temp/10;
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int T;

    // taking testcases
    cin >> T;
    while (T--) {
        int n;

        // taking number n
        cin >> n;

        // calling countDigits
        Solution obj;
        cout << obj.countDigits(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends