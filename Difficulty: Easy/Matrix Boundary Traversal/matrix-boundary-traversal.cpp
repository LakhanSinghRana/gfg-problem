//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to return list of integers that form the boundary
    // traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> >& mat) {
        // code here
        vector<int> v;
        int sr=0;
        int sc=0;
        int er=mat.size()-1;
        int ec=mat[0].size()-1;
        while(sr<=sc && er<=ec){
            for(int i=sc;i<=ec;i++){
                v.push_back(mat[sr][i]);
            }
            for(int i=sr+1;i<=er;i++){
                v.push_back(mat[i][ec]);
                
            }
            for(int i=ec-1;i>=sc;i--){
                v.push_back(mat[er][i]);
            }
            for(int i=er-1;i>sc;i--){
                v.push_back(mat[i][sc]);
            }
            return v;
        }
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends