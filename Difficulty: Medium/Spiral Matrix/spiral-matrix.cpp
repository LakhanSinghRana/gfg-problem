//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int sr=0;
        int sc=0;
        int er=n-1;
        int ec=m-1;
        int count=1;
        while(sr<=er && sc<=ec){
            for(int i=sc;i<=ec;i++){
                if(count == k) return a[sr][i];
                count++;
            }
            for(int i=sr+1;i<=er;i++){
                if(count == k) return a[i][ec];
                count++;
            }
            for(int i=ec-1;i>=sc;i--){
                if(count == k) return a[er][i];
                count++;
            }
            for(int i=er-1;i>sr;i--){
                if(count == k) return a[i][sc];
                count++;
            }
            sr++;
            sc++;
            er--;
            ec--;
            
        }
    }

};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    
cout << "~" << "\n";
}
}
// } Driver Code Ends