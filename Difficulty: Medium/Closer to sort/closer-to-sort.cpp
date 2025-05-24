class Solution {
  public:

    // arr[]: input array
    // n: size of array
    // x: element to find index
    // Function to find index of element x in the array if it is present.
    int closer(int arr[], int n, int x) {
        // Your code here
        for(int i=0;i<n;i++){
            if(arr[i]==x) return i;
        }
        return -1;
    }
};
