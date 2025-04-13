//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N) {
        vector<int> v;
        int temp = N;

    // Decrease phase
        while (temp > 0) {
            v.push_back(temp);
            temp -= 5;
        }

    // Add the last value (0 or negative)
        v.push_back(temp);

    // Increase phase
        while (temp != N) {
            temp += 5;
            v.push_back(temp);
        }

        return v;
    }

};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends