class Solution {
  public:
    int solve(string s,int i,int j,vector<vector<int>> &v){
        if(i==j) return 0;
        if(i>j) return 0;
        if(v[i][j]!= -1) return v[i][j];
        if(s[i]==s[j]) return solve(s,i+1,j-1,v);
        
        int l= 1+solve(s,i+1,j,v);
        int r=1+solve(s,i,j-1,v);
        return v[i][j]= min(l,r);
    }
    int minDeletions(string s) {
        // code here
        
        int n=s.size();
        vector<vector<int>> v(n+1,vector<int>(n+1,-1));
        return solve(s,0,n-1,v);
    }
};