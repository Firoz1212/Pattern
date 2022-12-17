//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            if(i%2==0){
                 for(int j=1;j<=i;j++){
                     if(j%2!=0){
                         cout<<"0 ";
                     }
                     else{
                         cout<<"1 ";
                     }
                 }
            }
            else{
            for(int j=1;j<=i;j++){
                     if(j%2==0){
                         cout<<"0 ";
                     }
                     else{
                         cout<<"1 ";
                     }
                 }
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends