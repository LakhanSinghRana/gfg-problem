//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string countAndSay(int n) {
        // code here
        
        string curr="1";
        
        for(int i=2;i<=n;i++){
            string next="";
            int count=1;
            for(int j=1;j<curr.length();j++){
                if(curr[j-1]==curr[j]) count++;
                else{
                    next+=to_string(count)+curr[j-1];
                    count =1;
                }
            }
            next+=to_string(count)+curr[curr.length()-1];
            curr=next;
        }
        return curr;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends