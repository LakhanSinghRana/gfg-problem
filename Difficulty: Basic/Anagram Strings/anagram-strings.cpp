//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int areAnagram(string s1, string s2) {
        // code here
        if(s1.length()!=s2.length()) return 0;
        vector<int> v(26,0);
        for(int i=0;i<s1.length();i++){
            v[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            v[s2[i]-'a']--;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!=0) return false;
        }
        return true;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends